public class BlueMeleeMob : MonsterBase {

    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(0, 0)].AP); // (n, n)을 string으로 수정 가능
        ability.SetHP(GM.I.MobData[(0, 0)].HP);
        ability.SetMaxHP(GM.I.MobData[(0, 0)].HP);
        ability.SetAS(1f);
        ability.SetAR(0f);
        ability.SetMS(1f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData[(0, 0)].Exp);
    }
}

