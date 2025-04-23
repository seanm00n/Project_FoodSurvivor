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
    protected GameObject _expPref;

    [SerializeField]
    protected GameObject _projPref;

    [SerializeField]
    protected GameObject _effectObject;

    [SerializeField]
    protected Zone _zone;

    [SerializeField]
    protected AudioClip _hitSound;

    #endregion

    #region Member Ref

    protected Nexus _nexus;

    protected BoxCollider2D _nexusColl;

    protected SpriteRenderer _spriteRenderer;

    protected Animator _animator;

    protected AudioSource _audioSource;

    #endregion

    #region Memver variable

    protected HashSet<Debuff> _debuffList;

    protected float _lastAttackTime = 0f;

    protected float _rangeOffset = 0.8f;

    protected State _state = State.Idle;

    protected Coroutine _effectCoroutine;

    protected Coroutine _hitCoroutine;

    protected SpriteRenderer _effectSR;

    #endregion

    protected abstract void Initialize();

    protected void Awake() {
        ability = new Ability();
        _debuffList = new HashSet<Debuff>();
        _animator = GetComponent<Animator>();
        _audioSource = GetComponent<AudioSource>();
        SetState(State.Moving);
    }

    protected void Start() {
        _spriteRenderer = GetComponentInChildren<SpriteRenderer>();
        _nexus = GameObject.FindGameObjectWithTag("Nexus")?.GetComponent<Nexus>();
        _nexusColl = _nexus?.GetComponent<BoxCollider2D>(); // 싱글턴 클래스라서 destroy되어도 Nexus.I는 남아있음
        _effectSR = _effectObject.GetComponent<SpriteRenderer>();
        Initialize();
    }

    protected void Update() {
        Movement();
        Rotation();
    }

    protected void OnTriggerStay2D(Collider2D collision) { // 지속 데미지
        if(_state == State.Death) return;

        if(collision.CompareTag("PlayerProj") && _hitCoroutine == null) {
            _hitCoroutine = StartCoroutine(LateHit(collision.gameObject));
        }
    }

    protected void OnTriggerExit2D(Collider2D collision) {
        if(_state == State.Death) return;

        if(collision.CompareTag("PlayerProj")) {
            if(_hitCoroutine != null) {
                StopCoroutine(_hitCoroutine);
                _hitCoroutine = null;
            }
            
            HandleHit(collision.gameObject);
        }
    }

    protected IEnumerator LateHit(GameObject target) {
        yield return new WaitForSeconds(1f);
        HandleHit(target);
        _hitCoroutine = null;
    }

    protected void HandleHit(GameObject target) {
        _audioSource.PlayOneShot(_hitSound);
        IBattle battle = target.GetComponent<IBattle>();
        if(_effectCoroutine != null) StopCoroutine(_effectCoroutine);
        _effectCoroutine = StartCoroutine(HitEffect());
        
        if(battle != null) {
            ability.SetHP(ability.HP - battle.GetAP());
            CheckDeath();
        }        
    }

    protected void CheckDeath() {
        if(ability.HP <= 0f) {
            HandleDeath();
        }
    }

    protected virtual void HandleDeath() {
        OnMonsterDeath?.Invoke(this);
        _state = State.Death;
        SetState(State.Death);
        GetComponent<BoxCollider2D>().enabled = false;
        StartCoroutine(DropAndDestroy(0.5f));
    }

    protected IEnumerator DropAndDestroy(float value) {
        yield return new WaitForSeconds(value);
        GameObject instExp = Instantiate(_expPref, transform.position, Quaternion.identity); //1초 뒤
        instExp.GetComponent<EXP>().SetExp(ability.Exp);
        Destroy(gameObject);
    }

    protected void Movement() {
        if(_state == State.Death || _state == State.Attack) return;

        if(_nexus == null) {
            _state = State.Idle;
            return;
        }

        if(this is Boss boss) {
            if(Time.timeSinceLevelLoad - boss.lastSkillUse >= boss.skillDuration) {
                ability.SetAR(3f);
            }
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
            if((Time.timeSinceLevelLoad - _lastAttackTime) >= (1f / ability.AS)) {
                _lastAttackTime = Time.timeSinceLevelLoad;
                HandleAttack();
            }
        }
    }

    protected void Rotation() { 
        if(_state != State.Moving || _nexus == null) return;

        Vector3 direction = _nexus.transform.position - transform.position;
        if(direction.x >= 0) {
            _spriteRenderer.flipX = false; // right
            return;
        } else {
            _spriteRenderer.flipX = true; // left
        }
    }

    protected virtual void HandleAttack() {
        if(_state == State.Death) return;
        _state = State.Attack;
        _animator.SetTrigger("Attack");

        Vector3 spawnDir = (_nexus.transform.position - transform.position).normalized;
        float angle = Mathf.Atan2(spawnDir.y, spawnDir.x) * Mathf.Rad2Deg;

        GameObject instProj = Instantiate(_projPref, transform.position, Quaternion.Euler(0, 0, angle)); // 적 방향으로
        instProj.GetComponent<MonsterProjBase>().SetAbility(ability);

        Invoke(nameof(ResetState), (1f / ability.AS)); // state init
    }

    protected void ResetState() {
        if(_state == State.Death) return;

        _state = State.Moving;
        SetState(State.Moving);
    }

    protected IEnumerator HitEffect() {
        _effectSR.sprite = _spriteRenderer.sprite;
        _effectSR.flipX = _spriteRenderer.flipX;
        _effectObject.SetActive(true);
        yield return new WaitForSeconds(0.05f);
        _effectObject.SetActive(false);
    }

    public void AddDebuff(Debuff debuff) {
        _debuffList.Add(debuff); // return bool
    }

    public void RemoveDebuff(Debuff debuff) {
        _debuffList.Remove(debuff); // return bool
    }
    
    public void SetState(State state) { // 없는 값 수정
        foreach(var variable in new[] { "Idle", "Walk", "Die" }) {
            _animator.SetBool(variable, false);
        }

        switch(state) {
            case State.Moving: _animator.SetBool("Walk", true); break;
            case State.Death: _animator.SetBool("Die", true); break;
            default: throw new NotSupportedException();
        }
    }

    public Zone GetZone() => _zone;

    protected void OnDestroy() {
        StopAllCoroutines();
    }
}
