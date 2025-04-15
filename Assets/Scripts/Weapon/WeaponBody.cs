using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponBody : WeaponProjBase {
    protected override void LevelUp() {}

    protected override void Initialize() {
        ability = GameObject.FindGameObjectWithTag("Player")?.GetComponent<Weapon>()?.ability;
    }

    protected override void SkillAction() {}
}
