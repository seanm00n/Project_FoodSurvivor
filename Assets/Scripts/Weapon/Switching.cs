public class Switching : WeaponProj {
    public override void LevelUp() {
        if(ability.Lv == 5) return;
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("Switching", ability.Lv)]);
    }

    protected override void Initialize() {
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
    }

    protected override void SkillAction() {
        //
    }
}
