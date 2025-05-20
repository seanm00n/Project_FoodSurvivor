
public class BlueMeleeMob : MonsterBase {

    public override string poolKey { get; protected set; } = "BlueMelee";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(GM.I.MobData["BlueMelee"].AP);
        ability.SetHP(GM.I.MobData["BlueMelee"].HP);
        ability.SetMaxHP(GM.I.MobData["BlueMelee"].HP);
        ability.SetAS(0.3f);
        ability.SetAR(0f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData["BlueMelee"].Exp);
        _rangeOffset = 0.5f;
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