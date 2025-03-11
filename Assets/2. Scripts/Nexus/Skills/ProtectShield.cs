using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectShield : NexusSkillBase
{
    CircleCollider2D[] _colliders;

    protected override void Start() {
        base.Start();
        _colliders = GetComponentsInChildren<CircleCollider2D>();
    }

    protected override void Update() {
        base.Update();
        this.transform.localPosition = Vector3.zero; // 밀리는 현상 해결
    }

    public override void Initialize() {
        _battleData._attackPoint = 1f;
        _battleData._moveSpeed = 100f;
        _battleData._duration = 1f;
        _battleData._size = 1f;
    }

    protected override void SkillAction() {
        transform.Rotate(Vector3.forward * _battleData._moveSpeed * Time.deltaTime);
    }
}
