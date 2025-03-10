using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterMeleeProjectile : MonsterProjectileBase
{
    protected override bool _isMelee { get; set; } = true;

    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
    }

    protected override void Initialize() {
        _battleData._lifeTime = 2f;
    }
}