public class YellowMeleeMob : MonsterBase
{
    public override string poolKey { get; protected set; } = "YellowMelee";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["YellowMelee"].AP);
        ability.SetHP(GM.I.MobData["YellowMelee"].HP);
        ability.SetMaxHP(GM.I.MobData["YellowMelee"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(0f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData["YellowMelee"].Exp);
        _rangeOffset = 0.8f;
    }

    protected override void OnEnable() {
        base.OnEnable();
        GM.I.OnBossSpawn += HandleSelfRelease;
        GM.I.spawnedMobs.Add(gameObject);
    }
}
