using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MonsterRangedMinion : MonsterBase
{
    public override bool _isBoss { get; protected set; } = false;
    public override bool _isMelee { get; protected set; } = false;

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

