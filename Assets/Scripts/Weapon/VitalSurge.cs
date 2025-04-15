public class VitalSurge : WeaponProjBase {

    private Nexus nexus = Nexus.I;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("VitalSurge", ability.Lv)]);
        
        nexus.ability.SetMaxHP(nexus.ability.MaxHP + ability.AP);
        nexus.ability.SetHP(nexus.ability.HP + ability.AP);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {}
}
