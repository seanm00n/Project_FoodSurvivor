public class YellowRangedMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(2, 1)].AP);
        ability.SetHP(GM.I.MobData[(2, 1)].HP);
        ability.SetMaxHP(GM.I.MobData[(2, 1)].HP);
        ability.SetAS(0.3f);
        ability.SetAR(2f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData[(2, 1)].Exp);
    }
}