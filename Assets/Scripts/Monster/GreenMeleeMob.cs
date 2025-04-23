public class GreenMeleeMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(1, 0)].AP);
        ability.SetHP(GM.I.MobData[(1, 0)].HP);
        ability.SetMaxHP(GM.I.MobData[(1, 0)].HP);
        ability.SetAS(0.5f);
        ability.SetAR(0f);
        ability.SetMS(1.25f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData[(1, 0)].Exp);
    }
}
