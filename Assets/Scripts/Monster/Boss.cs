using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Xml.Serialization;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class Boss : MonsterBase {

    public event Action<Boss> OnBossDeath;

    public event Action OnGameClear;

    public float lastSkillUse { get; private set; }

    public float skillDuration { get; private set; } = 10f;

    public override string poolKey { get; protected set; } = "Boss";

    private SpriteRenderer _alertObjectSR;

    private SpriteRenderer _counterAlertSR;

    private GameObject _alertObject;

    [SerializeField]
    private GameObject _redAlert; // multi attack용

    [SerializeField]
    private GameObject _blueAlert; // rush attack용

    [SerializeField]
    private GameObject _counterAlert; // rush attack반투명용

    [SerializeField]
    private Slider _healthBar;

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(50f);
        ability.SetHP(10000f);
        ability.SetMaxHP(10000f);
        ability.SetAS(0.5f); // attack per second
        ability.SetAR(13f); // attack range
        ability.SetMS(1.25f); // move speed
        ability.SetLifeTime(1.5f); // proj lifetime
        ability.SetExp(0);
        _rangeOffset = 2f;
        _counterAlertSR = _counterAlert.GetComponent<SpriteRenderer>();
        //_effectSprite = _redLight.GetComponent<SpriteRenderer>();
    }

    protected override void OnEnable() {
        base.OnEnable();
        lastSkillUse = Time.timeSinceLevelLoad;
        _redAlert.SetActive(false);
        _blueAlert.SetActive(false);
        _counterAlert.SetActive(false);
    }

    protected override void OnDisable() {
        StopAllCoroutines();
    }

    protected override void Repeat() {
        SetSliderUI();
    }

    private void SetSliderUI() {
        float curBossHP = ability.HP;
        float maxBossHP = ability.MaxHP;
        _healthBar.value = curBossHP / maxBossHP;        
    }

    protected override void HandleDeath() { // 수정
        _state = State.Death;
        _boxColl.enabled = false;
        _animator.SetTrigger("Die");
        _animator.SetBool("Walk", false);
        OnBossDeath.Invoke(this);
        StopAllCoroutines();
        StartCoroutine(DestroyBoss(_animator.GetCurrentAnimatorStateInfo(0).length));
    }

    private IEnumerator DestroyBoss(float value) {
        yield return new WaitForSeconds(value);
        OnGameClear.Invoke();
        Destroy(gameObject);
    }

    protected override void HandleAttack() {
        if(_state == State.Death || _state == State.Attack) return;

        if(Time.timeSinceLevelLoad - lastSkillUse >= skillDuration) { // 시간제로 변경
            lastSkillUse = Time.timeSinceLevelLoad;
            IEnumerator selCoroutine = (UnityEngine.Random.value >= 0.5f) ? RushAttack() : MultiAttack(); // 패턴 선택지 추가 GiantAttack()
            StartCoroutine(selCoroutine);
            return;
        }

        NormalAttack();
    }

    private void NormalAttack() { // 원거리 기본 공격
        //base.HandleAttack(); 
        
    }

    private IEnumerator MultiAttack() { // 여러발 공격
        _state = State.Attack;
        _animator.SetTrigger("Multi");
        _alertObjectSR.sprite = _spriteRenderer.sprite;
        _alertObjectSR.flipX = _spriteRenderer.flipX;
        _redAlert.SetActive(true);
        yield return new WaitForSeconds(1f);

        for(int i = 0; i < 8; ++i) {
            for(int index = 0; index < 24; ++index) {
                GameObject spawnedProj = GM.I.monProjPool["BossRanged"].Get();
                spawnedProj.transform.position = transform.position;
                spawnedProj.transform.rotation = Quaternion.Euler(0f, 0f, (index * 15) + (i * 5));
            }
            yield return new WaitForSeconds(0.125f);
        }
        _redAlert.SetActive(false);
        lastSkillUse++;
        ability.SetAR(0f);
        ResetState();
    }

    //private IEnumerator RushAttackOld() { // 돌진 공격
    //    _state = State.Attack;
    //    _animator.SetTrigger("Rush"); // idle and turn red
    //    _alertObjectSR.sprite = _spriteRenderer.sprite;
    //    _alertObjectSR.flipX = _spriteRenderer.flipX;
    //    _redAlert.SetActive(true);
    //    yield return new WaitForSeconds(1f);

    //    GameObject spawnedProj = GM.I.monProjPool["BossRush"].Get();
    //    spawnedProj.transform.SetParent(transform, false);

    //    float dist = 6f;
    //    float duration = 1f;
    //    float elapsed = 0f;
    //    Vector3 dir = (_nexus.transform.position - transform.position).normalized;
    //    Vector3 start = transform.position;
    //    Vector3 end = start + (Vector3)(dir * dist);

    //    while(elapsed < duration) {
    //        elapsed += Time.deltaTime;
    //        float t = Mathf.Clamp01(elapsed / duration);
    //        transform.position = Vector3.Lerp(start, end, t);
    //        yield return null;
    //    }

    //    transform.position = end;
    //    _redAlert.SetActive(false);
    //    lastSkillUse++;
    //    ability.SetAR(0f);
    //    ResetState();
    //}

    private IEnumerator RushAttack() { 
        _state = State.Attack;
        _animator.SetTrigger("Rush"); // 차징 애니메이션 1.2초
        yield return new WaitForSeconds(0.5f);

        _counterAlert.SetActive(true);
        _counterAlertSR.sprite = _spriteRenderer.sprite;
        _counterAlertSR.flipX = _spriteRenderer.flipX;
        _counterAlert.transform.localScale = new Vector3(2, 2, 1);

        float elapsed = 0f;
        float motion = 0.5f;
        bool isfail = false;
        Vector3 start = new Vector3(2, 2, 1);
        Vector3 end = new Vector3(1, 1, 1);
        while(elapsed < motion) {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / motion);
            _counterAlert.transform.localScale = Vector3.Lerp(start, end, t);
            
            if(_currHitFrame == _frameCount) {
                isfail = true;
                _counterAlert.transform.localScale = Vector3.one;
                _counterAlert.SetActive(false);
                break;
            }

            yield return null;
        }
        _counterAlert.SetActive(false);
        // 위에서 피격 됬는지 검사 후 안됬으면 0.2초 동안 피격 확인
        // 피격 시 true
        bool isSuccess = false;
        if(!isfail) {
            // 파란 이펙트 등장
            _alertObject = _blueAlert;
            _alertObject.SetActive(true);
            _alertObjectSR = _alertObject.GetComponent<SpriteRenderer>();
            _alertObjectSR.sprite = _spriteRenderer.sprite;
            _alertObjectSR.flipX = _spriteRenderer.flipX;

            elapsed = 0f;
            motion = 0.2f;
            while(elapsed < motion) {
                elapsed += Time.deltaTime;
                if(_currHitFrame == _frameCount) {
                    isSuccess = true;
                    _alertObject.SetActive(false);
                    _animator.SetTrigger("RushFail");
                    break;
                }
                yield return null;
            }
            _alertObject.SetActive(false);
        }
        
        // 위에서 피격 됬거나 밑에서 피격 안됬으면 돌진
        if(isfail || !isSuccess) {
            // 애니메이션 + 이동시키기 + 공격콜라이더 생성
            GameObject spawnedProj = GM.I.monProjPool["BossRush"].Get();
            spawnedProj.transform.SetParent(transform, false);

            float dist = 7f;
            motion = 0.3f;
            elapsed = 0f;
            Vector3 dir = (_nexus.transform.position - transform.position).normalized;
            start = transform.position;
            end = start + (Vector3)(dir * dist);

            while(elapsed < motion) {
                // 뒤로 밀려나는 느낌의 물리 추가
                elapsed += Time.deltaTime;
                float t = Mathf.PingPong(elapsed / (motion / 2), 1f);
                transform.position = Vector3.Lerp(start, end, t);
                yield return null;
            }

            transform.position = start;
        }

        lastSkillUse++;
        ResetState();
    }
}
