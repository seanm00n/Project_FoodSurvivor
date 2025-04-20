
public class VitalSurge : WeaponProjBase {

    private Nexus _nexus = Nexus.I;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("VitalSurge", ability.Lv)]);
        
        _nexus.ability.SetMaxHP(_nexus.ability.MaxHP + ability.AP);
        _nexus.ability.SetHP(_nexus.ability.HP + ability.AP);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {}
}
