using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MonsterBase : MonoBehaviour
{
    public event Action<string, GameObject> OnMonsterDeath;

    public Ability ability { get; protected set; }

    public abstract string poolKey { get; protected set; }

    #region SerializeField

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

    protected BoxCollider2D _boxColl;

    protected SpriteRenderer _spriteRenderer;

    protected Animator _animator;

    protected AudioSource _audioSource;

    protected bool _initialized = false;

    #endregion

    #region Memver variable

    protected HashSet<Debuff> _debuffList;

    protected float _lastAttackTime;

    protected float _rangeOffset;

    protected State _state;

    protected Coroutine _effectCoroutine;

    protected Coroutine _hitCoroutine;

    protected SpriteRenderer _effectSR;

    #endregion
    protected abstract void Repeat();

    public virtual void Initialize() { // 한번만 하면 되는 공통적인 것들
        ability = new Ability();
        _animator = GetComponent<Animator>();
        _audioSource = GetComponent<AudioSource>();
        _spriteRenderer = GetComponentInChildren<SpriteRenderer>();
        _nexus = GameObject.FindGameObjectWithTag("Nexus")?.GetComponent<Nexus>();
        _nexusColl = _nexus?.GetComponent<BoxCollider2D>();
        _boxColl = GetComponent<BoxCollider2D>();
        _effectSR = _effectObject.GetComponent<SpriteRenderer>();
        _initialized = true;
    }

    protected virtual void OnEnable() { // 매번 초기화 필요한것들
        if(!_initialized) Initialize();
        ability.SetHP(ability.MaxHP);
        _debuffList = new HashSet<Debuff>();
        _effectObject.SetActive(false);
        _animator.SetBool("Walk", true);
        _state = State.Moving;
        _boxColl.enabled = true;
        _lastAttackTime = 0f;
    }

    protected virtual void OnDisable() {
        StopAllCoroutines();
        GM.I.OnBossSpawn -= HandleSelfRelease;
        GM.I.spawnedMobs.Remove(gameObject);
    }

    protected void HandleSelfRelease() {
        GM.I.monPool[poolKey].Release(gameObject);
    }

    private void Update() {
        Movement();
        Rotation();
        Repeat();
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
        
        if(battle != null) {
            ability.SetHP(ability.HP - battle.GetAP());
            CheckDeath();
        }        
    }

    protected IEnumerator HitEffect() {
        _effectSR.sprite = _spriteRenderer.sprite;
        _effectSR.flipX = _spriteRenderer.flipX;
        _effectObject.SetActive(true);
        yield return new WaitForSeconds(0.05f);
        _effectObject.SetActive(false);
        _effectCoroutine = null;
    }

    protected void CheckDeath() {
        if(ability.HP <= 0f) {
            HandleDeath();
            return;
        }

        if(!gameObject.activeInHierarchy) { 
            Debug.Log("hiteffect coroutine attempted during death"); 
            return; 
        }

        if(_effectCoroutine != null) {
            StopCoroutine(_effectCoroutine);
        }
        _effectCoroutine = StartCoroutine(HitEffect());
    }

    protected virtual void HandleDeath() {
        _state = State.Death;
        _boxColl.enabled = false;
        _animator.SetTrigger("Die");
        _animator.SetBool("Walk", false);
        _effectObject.SetActive(false);
        StopAllCoroutines();
        float animLength = _animator.GetCurrentAnimatorStateInfo(0).length;
        StartCoroutine(DropAndRelease(animLength));
    }

    protected IEnumerator DropAndRelease(float value) {
        yield return new WaitForSeconds(value);
        GameObject spawnedExp = GM.I.mobExpPool[_zone].Get();
        spawnedExp.transform.position = transform.position;
        OnMonsterDeath.Invoke(poolKey, gameObject);
    }

    protected void Movement() {
        if(_state == State.Death || _state == State.Attack) return;

        if(_nexus == null) {
            _nexus = Nexus.I;
            if(_nexus == null) return;
        }

        if(this is Boss boss) {
            if(Time.timeSinceLevelLoad - boss.lastSkillUse >= boss.skillDuration) {
                ability.SetAR(3f);
            }
        }

        float distance = Vector3.Distance(_nexus.transform.position, transform.position);

        if(distance > ability.AR + _rangeOffset) {
            _state = State.Moving;
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

        string poolKeyCopy = poolKey;
        if(poolKey == "Boss") poolKeyCopy = "BossMelee";
        GameObject spawnProj = GM.I.monProjPool[poolKeyCopy].Get();

        if(spawnProj == null) Debug.Log("monsterbase proj is null");
        else spawnProj.transform.SetPositionAndRotation(transform.position, Quaternion.Euler(0, 0, angle));

        Invoke(nameof(ResetState), (1f / ability.AS)); // state init
    }

    protected void ResetState() {
        if(_state == State.Death) return;
        _state = State.Moving;
    }


    public void AddDebuff(Debuff debuff) {
        _debuffList.Add(debuff); // return bool
    }

    public void RemoveDebuff(Debuff debuff) {
        _debuffList.Remove(debuff); // return bool
    }

    public Zone GetZone() => _zone; // 필요?
}
