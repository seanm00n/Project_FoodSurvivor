using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectShield : NexusSkillBase
{
    public override float _moveSpeed { get; protected set; }
    public override float _duration { get; protected set; }
    public override float _damage { get; protected set; }
    public override float _power { get; protected set; }
    public override float _size { get; protected set; }
    private GameObject _targetNexus;
    

    protected override void Start() {
        base.Start();
        _targetNexus = GameObject.FindWithTag("Player");
    }

    protected override void Update() {
        base.Update();
        this.transform.position = _targetNexus.transform.position;
    }

    public override void Initialize() {

    }

    protected override void SkillAction() {

    }   
}
