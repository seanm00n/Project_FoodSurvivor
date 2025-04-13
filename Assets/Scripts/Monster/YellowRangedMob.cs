using UnityEditor.Playables;

public class YellowRangedMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(2, 1)].AP);
        ability.SetHP(GM.I.MobData[(2, 1)].HP);
        ability.SetMaxHP(GM.I.MobData[(2, 1)].HP);
        ability.SetAS(1f);
        ability.SetAR(5f);
        ability.SetMS(1f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData[(2, 1)].Exp);
    }
}