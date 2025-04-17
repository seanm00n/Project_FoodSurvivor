using System;
using System.Collections;
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

    private Animator _animator;

    #endregion

    #region Memver variable

    private HashSet<Debuff> _debuffList;

    private float _lastHitTime = 0f; 

    private float _lastAttackTime = 0f;

    private float _rangeOffset = 0.8f;

    private State _state = State.Idle;

    private Color _originalColor;

    private Coroutine _hitCoroutine;

    #endregion

    protected abstract void Initialize();

    private void Awake() {
        ability = new Ability();
        _debuffList = new HashSet<Debuff>();
        _nexus = Nexus.I;
        _nexusColl = _nexus?.GetComponent<BoxCollider2D>(); // 싱글턴 클래스라서 destroy되어도 Nexus.I는 남아있음
        _spriteRenderer = GetComponentInChildren<SpriteRenderer>();
        _originalColor = _spriteRenderer.color;
        _animator = GetComponent<Animator>();
        SetState(State.Moving);
        Initialize();
    }

    private void Update() {
        Movement();
        Rotation();
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(_state == State.Death) return;

        if(collision.CompareTag("PlayerProj")) {
            //_lastHitTime = Time.time;
            HandleHit(collision.gameObject);
        }
    }

    private void HandleHit(GameObject target) {
        IBattle battle = target.GetComponent<IBattle>();
        if(_hitCoroutine != null) StopCoroutine(_hitCoroutine);
        _hitCoroutine = StartCoroutine(HitEffect());

        if(battle != null) {
            ability.SetHP(ability.HP - battle.GetAP());
            CheckDeath();
        }        
    }

    private void CheckDeath() {
        if(ability.HP <= 0f) {
            OnMonsterDeath?.Invoke(this);
            HandleDeath();
        }
    }
    
    private void HandleDeath() {
        _state = State.Death;
        SetState(State.Death);
        StartCoroutine(DropAndDestroy(1f));
    }

    private IEnumerator DropAndDestroy(float value) {
        yield return new WaitForSeconds(value);
        GameObject instExp = Instantiate(_expPref, transform.position, Quaternion.identity); //1초 뒤
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

        if(distance > ability.AR + _rangeOffset) { //_nexusColl.size.x + 
            _state = State.Moving;
            SetState(State.Moving);
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
        if(_state != State.Moving || _nexus == null) return;

        Vector3 direction = _nexus.transform.position - transform.position;
        if(direction.x >= 0) {
            _spriteRenderer.flipX = false; // right
            return;
        } else {
            _spriteRenderer.flipX = true; // left
        }
    }

    private void HandleAttack() {
        if(_state == State.Death) return;
        _state = State.Attack;
        _animator.SetTrigger("Attack");

        float radius = GetComponent<BoxCollider2D>().size.x / 2f + 0.1f;
        Vector3 spawnDir = (_nexus.transform.position - transform.position).normalized;
        float angle = Mathf.Atan2(spawnDir.y, spawnDir.x) * Mathf.Rad2Deg;

        GameObject instProj = Instantiate(projPref, transform.position, Quaternion.Euler(0, 0, angle)); // 적 방향으로
        MonsterProjBase projBase = instProj.GetComponent<MonsterProjBase>();

        projBase.SetAbility(ability);
        Invoke(nameof(ResetState), (1f / ability.AS)); // state init
    }

    private void ResetState() {
        if(_state == State.Death) return;
        _state = State.Moving;
        SetState(State.Moving);
    }

    private IEnumerator HitEffect() {
        Debug.Log("HitEffect");
        _spriteRenderer.color = Color.white;
        yield return new WaitForSeconds(0.05f);
        _spriteRenderer.color = _originalColor;
    }

    public void AddDebuff(Debuff debuff) {
        _debuffList.Add(debuff); // return bool
    }

    public void RemoveDebuff(Debuff debuff) {
        _debuffList.Remove(debuff); // return bool
    }
    
    public void SetState(State state) { // use?
        foreach(var variable in new[] { "Idle", "Ready", "Walk", "Run", "Jump", "Die" }) {
            _animator.SetBool(variable, false);
        }

        switch(state) {
            case State.Moving: _animator.SetBool("Walk", true); break;
            case State.Death: _animator.SetBool("Die", true); break;
            default: throw new NotSupportedException();
        }
    }

    public Zone GetZone() => _zone;
}
