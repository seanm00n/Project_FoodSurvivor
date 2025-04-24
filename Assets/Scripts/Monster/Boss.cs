using System;
using System.Collections;
using UnityEngine;

public class Boss : MonsterBase {

    public event Action<Boss> OnBossDeath;

    public float lastSkillUse { get; private set; }

    public float skillDuration { get; private set; } = 10f;

    [SerializeField]
    private GameObject _telegraphObject;

    private SpriteRenderer _telegraphSR;

    public override string poolKey { get; protected set; } = "Boss";

    public override void Initialize() {
        base.Initialize();
        ability.SetAP(50f);
        ability.SetHP(10000f);
        ability.SetMaxHP(10000f);
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

    protected override void HandleDeath() { // 수정
        OnBossDeath.Invoke(this);
        _state = State.Death;
        SetState(State.Death);
        GetComponent<BoxCollider2D>().enabled = false;
        Destroy(gameObject, 0.5f);
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
