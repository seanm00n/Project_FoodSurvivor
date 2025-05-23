public class GreenMeleeMob : MonsterBase
{
    public override string poolKey { get; protected set; } = "GreenMelee";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["GreenMelee"].AP);
        ability.SetHP(GM.I.MobData["GreenMelee"].HP);
        ability.SetMaxHP(GM.I.MobData["GreenMelee"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(0f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData["GreenMelee"].Exp);
    }

    protected override void OnEnable() {
        base.OnEnable();
        GM.I.OnBossSpawn += HandleSelfRelease;
        GM.I.spawnedMobs.Add(gameObject);
    }

    protected override void Repeat() {
        //
    }
}
