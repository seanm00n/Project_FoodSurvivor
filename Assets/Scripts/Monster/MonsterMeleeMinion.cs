using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MonsterMeleeMinion : MonsterBase
{
    public override bool _isBoss { get; protected set; } = false;
    public override bool _isMelee { get; protected set; } = true;

    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
    }

    protected override void Initialize() {
        //
    }
}

