using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MonsterMeleeMinion : MonsterBase
{
    public override bool _isBoss { get; protected set; } = false;
    public override bool _isMelee { get; protected set; } = true;

    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
    }

    protected override void Initialize() {
        _battleData._attackPoint = 1f;
        _battleData._attackSpeed = 1f;
        _battleData._attackRange = 0f;
        _battleData._moveSpeed = 1f;
        _battleData._healthPoint = 10f;
        _battleData._hitDelay = 0f;
    }
}

