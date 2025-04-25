public class BlueRangedMob : MonsterBase
{
    public override string poolKey { get; protected set; } = "BlueRanged";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["BlueRanged"].AP);
        ability.SetHP(GM.I.MobData["BlueRanged"].HP);
        ability.SetMaxHP(GM.I.MobData["BlueRanged"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(2f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData["BlueRanged"].Exp);
        _rangeOffset = 0.5f;
    }

    protected override void OnEnable() {
        base.OnEnable();
        GM.I.OnBossSpawn += HandleSelfRelease;
        GM.I.spawnedMobs.Add(gameObject);
    }
}

