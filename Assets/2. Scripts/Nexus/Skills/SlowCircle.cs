using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class SlowCircle : NexusSkillBase 
{
    protected override void Start() {
        base.Start();
    }

    protected override void Update() {
        base.Update();
    }

    public override void Initialize() {
        _battleData._moveSpeed = 0;
        _battleData._attackPoint = 0;
        _battleData._size = 0;
        _battleData._duration = 0;
    }

    protected override void SkillAction() {
        //
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().AddDebuff(Debuff.Slow);
        }
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().RemoveDebuff(Debuff.Slow);
        }
    }
}
