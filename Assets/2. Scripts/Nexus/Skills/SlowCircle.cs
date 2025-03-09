using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class SlowCircle : NexusSkillBase 
{
    public override float _moveSpeed { get; protected set; }
    public override float _damage { get; protected set; }
    public override float _size { get; protected set; }
    public override float _duration { get; protected set; }
    public override float _power { get; protected set; }

    protected override void Start() {
        base.Start();
        
    }

    protected override void Update() {
        base.Update();
    }

    public override void Initialize() {
        _moveSpeed = 0;
        _damage = 0;
        _size = 0;
        _duration = 0;
        _power = 0;

    }

    protected override void SkillAction() {
        
    }

    private void OnCollisionEnter2D(Collision2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().AddDebuff(Debuff.Slow);
        }
    }

    private void OnCollisionExit2D(Collision2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().RemoveDebuff(Debuff.Slow);
        }
    }
}
