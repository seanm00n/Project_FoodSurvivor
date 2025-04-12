using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponBody : WeaponProj {
    public override void LevelUp() {
        //throw new System.NotImplementedException();
    }

    protected override void Initialize() {
        ability = Weapon.I.ability;
    }

    protected override void SkillAction() {
        //throw new System.NotImplementedException();
    }
}
