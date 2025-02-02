using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterMeleeProjectile : ProjectileBase
{
    protected override float _lifeTime { get; set; }
    protected override float _meleeConstant { get; set; }
    protected override string _targetName { get; set; }

    protected override void Start() {
        base.Start();

    }

    protected override void Update() {
        base.Update();
    }

    protected override void Initialize() {
        _targetName = "Nexus";
        _lifeTime = 5f;
        _meleeConstant = 0f;
    }
}