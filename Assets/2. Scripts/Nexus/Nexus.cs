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
/*        if(Input.GetKeyDown(KeyCode.A)) {
            Debug.Log("A Key Pressed");
            AddSkillTempFunc(); //
        }*/
    }

    protected override void Initialize() {
        //
    }

/*    private void AddSkillTempFunc() {
        Debug.Log("skill added");
        _SkillQueue += SlowCircle;
        _SkillQueue += ProtectShield;
    }*/
}
//moveSpeed attackPoint healthPoint