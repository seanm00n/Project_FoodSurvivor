using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knife : WeaponBase
{
    public override float _weaponAttackPoint { get; protected set; }
    public override int _weaponLevel { get; protected set; }
    public override int _weaponRank { get; protected set; }

    protected override void Start() {
        base.Start();
        // do some diff
    }

    protected override void Update() {
        base.Update();
        // do some diff
    }

    protected override void Initialize() {
        _weaponAttackPoint = 1f;
        _weaponLevel = 1;
        _weaponRank = 1;
    }
}
