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
        this.transform.localPosition = Vector3.zero; // 밀리는 현상 해결
    }

    public override void Initialize() {
        //
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
