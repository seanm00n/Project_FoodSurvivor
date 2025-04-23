public class GreenRangedMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(1, 1)].AP);
        ability.SetHP(GM.I.MobData[(1, 1)].HP);
        ability.SetMaxHP(GM.I.MobData[(1, 1)].HP);
        ability.SetAS(0.5f);
        ability.SetAR(2f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData[(1, 1)].Exp);
    }
}
