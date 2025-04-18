
public class Switching : WeaponProjBase {

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("Switching", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {}
}
