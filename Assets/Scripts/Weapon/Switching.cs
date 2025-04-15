
public class Switching : WeaponProjBase {

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("Switching", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {}
}
