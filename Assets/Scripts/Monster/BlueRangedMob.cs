using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class BlueRangedMob : MonsterBase
{
    protected override void Initialize() {
        ability.SetAP(GM.I.MobData[(0, 1)].AP);
        ability.SetAS(1f);
        ability.SetAR(5f);
        ability.SetMS(1f);
        ability.SetLifeTime(4f);
        ability.SetExp(GM.I.MobData[(0, 1)].Exp);
    }
}

