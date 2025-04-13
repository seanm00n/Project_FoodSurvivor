public class YellowMeleeMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(2, 0)].AP);
        ability.SetHP(GM.I.MobData[(2, 0)].HP);
        ability.SetMaxHP(GM.I.MobData[(2, 0)].HP);
        ability.SetAS(1f);
        ability.SetAR(0f);
        ability.SetMS(1f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData[(2, 0)].Exp);
    }
}
