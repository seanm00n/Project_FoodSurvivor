using System.Collections;
using System.Collections.Generic;
using UnityEditor.Playables;
using UnityEngine;

public class GreenMeleeMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(1, 0)].AP);
        ability.SetAS(1f);
        ability.SetAR(0f);
        ability.SetMS(1f);
        ability.SetLifeTime(0.2f);
        ability.SetExp(GM.I.MobData[(1, 0)].Exp);
    }
}
