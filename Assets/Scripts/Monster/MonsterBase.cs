using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class MonsterBase : MonoBehaviour
{
    public event Action<MonsterBase> OnMonsterDeath;

    public Ability ability { get; protected set; }

    #region SerializeField

    [SerializeField]
    private GameObject _expPref;

    [SerializeField]
    private GameObject projPref;

    [SerializeField]
    private Zone _zone;

    #endregion

    #region Member Ref
    private Nexus _nexus;

    private BoxCollider2D _nexusColl;

    private SpriteRenderer _spriteRenderer;
    #endregion

    #region Memver variable
    private HashSet<Debuff> _debuffList;

    private float _lastHitTime = 0f; 

    private float _lastAttackTime = 0f;

    private float _rangeOffset = 0.2f;

    private State _state = State.Idle;
    #endregion

    protected abstract void Initialize();

    private void Awake() {
        ability = new Ability();
        _debuffList = new HashSet<Debuff>();
        _nexus = Nexus.I;
        _nexusColl = _nexus.GetComponent<BoxCollider2D>();
        _spriteRenderer = GetComponent<SpriteRenderer>();
        OnMonsterDeath += HandleDeath;
        Initialize();
    }

    private void Update() {
        Movement();
        Rotation();
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(_state == State.Death) return;

        if(collision.gameObject.CompareTag("PlayerProjectile")) {
            _lastHitTime = Time.time;
            Debug.Log(collision);
            HandleHit(collision.gameObject);
        }
    }

    private void HandleHit(GameObject target) {
        IBattle battle = target.GetComponent<IBattle>();
        if(battle != null) {
            ability.SetHP(ability.HP - battle.GetAP());
            CheckDeath();
        }        
    }

    private void CheckDeath() {
        if(ability.HP <= 0f) {
            OnMonsterDeath?.Invoke(this);
        }
    }

    private void HandleDeath(MonsterBase monsterBase) {
        Debug.Log($"[{Time.time}] 몬스터 죽음: {gameObject.name}, 위치: {transform.position}\n{new System.Diagnostics.StackTrace()}");
        _state = State.Death;
        GameObject instExp = Instantiate(_expPref, transform.position, Quaternion.identity);
        instExp.GetComponent<EXP>().SetExp(ability.Exp);
        Destroy(gameObject);
    }

    private void Movement() {
        if(_state == State.Death || _state == State.Attack) return;

        if(_nexus == null) {
            _state = State.Idle;
            return;
        }

        float distance = Vector3.Distance(_nexus.transform.position, transform.position);

        if(distance > ability.AR + _nexusColl.size.x + _rangeOffset) {
            _state = State.Moving;
            Vector3 direction = (_nexus.transform.position - transform.position).normalized;
            float resultSpeed = ability.MS;
            if(_debuffList.Contains(Debuff.Slow)) resultSpeed /= 2;
            transform.position += direction * resultSpeed * Time.deltaTime;
        } else {
            if((Time.time - _lastAttackTime) >= (1f / ability.AS)) {
                _lastAttackTime = Time.time;
                HandleAttack();
            }
        }
    }

    private void Rotation() { 
        if(_state != State.Moving) return;
        Vector3 direction = _nexus.transform.position - this.transform.position;
        if(direction.x >= 0) {
            _spriteRenderer.flipX = false; // right
            return;
        } else {
            _spriteRenderer.flipX = true; // left
        }
    }

    private void HandleAttack() {
        _state = State.Attack;
        float radius = GetComponent<BoxCollider2D>().size.x / 2f + 0.1f;
        Vector3 spawnPos = this.transform.position + (this.transform.right * radius);

        GameObject instProj = Instantiate(projPref, spawnPos, Quaternion.identity);
        MonsterProj projBase = instProj.GetComponent<MonsterProj>();

        projBase.SetAbility(ability);
        Invoke(nameof(ResetState), (1f / ability.AS)); // state init
    }

    private void ResetState() {
        _state = State.Moving;
    }

    public void AddDebuff(Debuff debuff) {
        _debuffList.Add(debuff); // return bool
    }

    public void RemoveDebuff(Debuff debuff) {
        _debuffList.Remove(debuff); // return bool
    }

    public Zone GetZone() => _zone;
}