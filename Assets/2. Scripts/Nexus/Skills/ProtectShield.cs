using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectShield : NexusSkillBase
{
    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
        //this.transform.position = _targetNexus.transform.position;
    }

    public override void Initialize() {
        _battleData._moveSpeed = 1f;
        _battleData._duration = 1f;
        _battleData._size = 1f;
    }

    protected override void SkillAction() {
        // �о
    }   
}
