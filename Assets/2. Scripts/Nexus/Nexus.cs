using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nexus : NexusBase
{
    public override float _nexusHealthPoint { get; protected set; }
    public override float _nexusAttackPoint { get; protected set; }

    protected override void Start() {
        base.Start();
        this.SelectSkill();
    }

    protected override void Update() {
        base.Update();
        UseSkill();
        if(Input.GetKeyDown(KeyCode.A)) AddSkillBTempFunc();
    }

    protected override void Initialize() {
        _nexusHealthPoint = 1000f;
        _nexusAttackPoint = 2f;
    }

    protected override void SelectSkill() {
        _SkillQueue += SkillA;
        
    }

    private void AddSkillBTempFunc() {
        _SkillQueue += SkillB;
    }
}
