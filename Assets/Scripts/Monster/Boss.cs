using System;
using System.Collections;
using System.Xml.Serialization;
using UnityEngine;
using UnityEngine.UI;

public class Boss : MonsterBase {

    public event Action<Boss> OnBossDeath;

    public event Action OnGameClear;

    public float lastSkillUse { get; private set; }

    public float skillDuration { get; private set; } = 10f;

    private SpriteRenderer _telegraphSR;

    [SerializeField]
    private GameObject _telegraphObject;

    [SerializeField]
    private Slider _healthBar;


    public override string poolKey { get; protected set; } = "Boss";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(50f);
        ability.SetHP(10000f);
        ability.SetMaxHP(10000f);
        //ability.SetHP(1f); ability.SetMaxHP(1f); //for test
        ability.SetAS(0.5f); // attack per second
        ability.SetAR(0f); // attack range
        ability.SetMS(1.25f); // move speed
        ability.SetLifeTime(1.5f); // proj lifetime
        ability.SetExp(0);
        _rangeOffset = 2f;
        _telegraphSR = _telegraphObject.GetComponent<SpriteRenderer>();
    }

    protected override void OnEnable() {
        base.OnEnable();
        lastSkillUse = Time.timeSinceLevelLoad;
        _telegraphObject.SetActive(false);
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
            IEnumerator selectCoroutine = (UnityEngine.Random.value >= 0.5f) ? RushAttack() : MultiAttack();
            StartCoroutine(selectCoroutine);
            return;
        }

        NormalAttack();
    }

    private void NormalAttack() { // 근접 공격
        base.HandleAttack(); 
    }

    private IEnumerator MultiAttack() { // 여러발 공격
        _state = State.Attack;
        _animator.SetTrigger("Multi");
        _telegraphSR.sprite = _spriteRenderer.sprite;
        _telegraphSR.flipX = _spriteRenderer.flipX;
        _telegraphObject.SetActive(true);
        yield return new WaitForSeconds(1f);

        for(int i = 0; i < 8; ++i) {
            for(int index = 0; index < 24; ++index) {
                GameObject spawnedProj = GM.I.monProjPool["BossRanged"].Get();
                spawnedProj.transform.position = transform.position;
                spawnedProj.transform.rotation = Quaternion.Euler(0f, 0f, (index * 15) + (i * 5));
            }
            yield return new WaitForSeconds(0.125f);
        }
        _telegraphObject.SetActive(false);
        lastSkillUse++;
        ability.SetAR(0f);
        ResetState();
    }

    private IEnumerator RushAttack() { // 돌진 공격
        _state = State.Attack;
        _animator.SetTrigger("Rush"); // idle and turn red
        _telegraphSR.sprite = _spriteRenderer.sprite;
        _telegraphSR.flipX = _spriteRenderer.flipX;
        _telegraphObject.SetActive(true);
        yield return new WaitForSeconds(1f);

        GameObject spawnedProj = GM.I.monProjPool["BossRush"].Get();
        spawnedProj.transform.SetParent(transform, false);

        float dist = 6f;
        float duration = 1f;
        float elapsed = 0f;
        Vector3 dir = (_nexus.transform.position - transform.position).normalized;
        Vector3 start = transform.position;
        Vector3 end = start + (Vector3)(dir * dist);

        while(elapsed < duration) {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / duration);
            transform.position = Vector3.Lerp(start, end, t);
            yield return null;
        }
        
        transform.position = end;
        _telegraphObject.SetActive(false);
        lastSkillUse++;
        ability.SetAR(0f);
        ResetState();
    }
}
