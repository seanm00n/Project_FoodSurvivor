using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nexus : NexusBase
{
    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
        UseSkill();
        if(Input.GetKeyDown(KeyCode.A)) AddSkillTempFunc(); //
    }

    protected override void Initialize() {
        _battleData._healthPoint = 1000f;
        _battleData._attackPoint = 2f;
        _battleData._moveSpeed = 0.5f;
    }

    private void AddSkillTempFunc() {
        _SkillQueue += SlowCircle;
    }
}
//moveSpeed attackPoint healthPoint