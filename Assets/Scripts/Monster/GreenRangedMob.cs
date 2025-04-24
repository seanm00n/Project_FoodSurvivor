public class GreenRangedMob : MonsterBase
{
    public override string poolKey { get; protected set; } = "GreenRanged";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["GreenRanged"].AP);
        ability.SetHP(GM.I.MobData["GreenRanged"].HP);
        ability.SetMaxHP(GM.I.MobData["GreenRanged"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(2f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData["GreenRanged"].Exp);
        _rangeOffset = 0.8f;
    }

    protected override void OnEnable() {
        base.OnEnable();
        GM.I.OnBossSpawn += HandleSelfRelease;
        GM.I.spawnedMobs.Add(gameObject);
    }
}
