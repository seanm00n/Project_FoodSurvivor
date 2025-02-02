using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MonsterMeleeMinion : MonsterBase
{
    public override float _monsterAttackPoint { get; protected set; }
    public override float _monsterAttackSpeed { get; protected set; }
    public override float _monsterHealthPoint { get; protected set; }
    public override float _monsterHitDelay { get; protected set; }
    public override float _monsterMoveSpeed { get; protected set; }
    public override float _monsterAttackRange { get; protected set; }
    public override bool _isBoss { get; protected set; } = false;

    protected override void Start() {
        base.Start();

    }

    protected override void Update() {
        base.Update();
        // do some diff
    }

    protected override void Initialize() {
        _monsterAttackPoint = 1f;
        _monsterAttackSpeed = 1f;
        _monsterHealthPoint = 10f;
        _monsterHitDelay = 0f;
        _monsterMoveSpeed = 1f;
        _monsterAttackRange = 0f;
    }
}

