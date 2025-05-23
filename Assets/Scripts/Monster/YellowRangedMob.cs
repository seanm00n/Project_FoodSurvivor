public class YellowRangedMob : MonsterBase
{
    public override string poolKey { get; protected set; } = "YellowRanged";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["YellowRanged"].AP);
        ability.SetHP(GM.I.MobData["YellowRanged"].HP);
        ability.SetMaxHP(GM.I.MobData["YellowRanged"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(2f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData["YellowRanged"].Exp);
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