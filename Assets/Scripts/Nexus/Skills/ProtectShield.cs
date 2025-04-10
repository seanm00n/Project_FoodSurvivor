using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectShield : NexusSkillBase
{
    private Transform[] _childs;

    protected override void Start() {
        base.Start();
        _childs = GetComponentsInChildren<Transform>();
    }

    protected override void Update() {
        base.Update();
        this.transform.localPosition = Vector3.zero; // 밀리는 현상 해결
    }

    public override void Initialize() {
        foreach(var child in _childs) {
            child.GetComponent<BattleData>()._attackPoint = this._battleData._attackPoint;
            child.GetComponent<BattleData>()._moveSpeed = this._battleData._moveSpeed;
        }
    }

    protected override void SkillAction() {
        transform.Rotate(Vector3.forward * this._battleData._moveSpeed * Time.deltaTime);
    }
}
