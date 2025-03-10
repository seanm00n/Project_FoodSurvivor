using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knife : WeaponBase
{
    protected override void Start() {
        base.Start();
        // do some diff
    }

    protected override void Update() {
        base.Update();
        // do some diff
    }

    protected override void Initialize() {
        _battleData._attackPoint = 1f;
    }
}
