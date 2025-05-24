using System;
using UnityEngine;

public class GiantAttackMeleeProj : MonsterProjBase
{
    public event Action OnGiantHitNexus;

    protected override void HitAndRelease() {
        OnGiantHitNexus.Invoke();
    }
}
