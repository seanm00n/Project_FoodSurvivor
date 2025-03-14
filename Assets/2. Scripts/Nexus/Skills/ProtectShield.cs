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
        foreach(var child in _battleData) {
            child._attackPoint = 1f;
            child._moveSpeed = 100f;
            child._duration = 1f;
            child._size = 1f;
        }
    }

    protected override void SkillAction() {
        transform.Rotate(Vector3.forward * _battleData[0]._moveSpeed * Time.deltaTime);
    }
}
