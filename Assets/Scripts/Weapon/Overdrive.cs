
public class Overdrive : WeaponProjBase {

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("Overdrive", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {}
}
