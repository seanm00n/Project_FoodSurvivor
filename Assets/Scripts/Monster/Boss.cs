using System;
using System.Collections;
using Unity.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Pool;

public class Boss : MonsterBase {
    public event Action OnBossDeath;

    public float lastSkillUse { get; private set; }

    public float skillDuration { get; private set; } = 10f;

    [SerializeField]
    private GameObject _telegraphObject;

    private SpriteRenderer _telegraphSR;

    private ObjectPool<GameObject> _multiProjPool;


    protected override void Initialize() {
        ability.SetAP(50f);
        ability.SetHP(10000f);
        ability.SetMaxHP(10000f);
        ability.SetAS(0.5f); // attack per second
        ability.SetAR(0f); // attack range
        ability.SetMS(1.25f); // move speed
        ability.SetLifeTime(1.5f); // proj lifetime
        ability.SetExp(0);

        _rangeOffset = 2f;
        lastSkillUse = Time.timeSinceLevelLoad;
        _telegraphObject.SetActive(false);
        _telegraphSR = _telegraphObject.GetComponent<SpriteRenderer>();
        _multiProjPool = GM.I.bossProjPool;
    }

    protected override void HandleDeath() {
        OnBossDeath?.Invoke();
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
                Ability newAbility = ability.Clone();
                newAbility.SetLifeTime(3f);
                newAbility.SetAR(3f);
                newAbility.SetAP(10f);

                GameObject instProj = _multiProjPool.Get();
                instProj.transform.position = transform.position;
                instProj.transform.rotation = Quaternion.Euler(0f, 0f, (index * 15) + (i * 5));

                MonsterProjBase instProjBase = instProj.GetComponent<MonsterProjBase>();
                instProjBase.SetAbility(newAbility);
                instProjBase.InitSpawnTime();
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
        
        GameObject instProj = Instantiate(_projPref, transform);
        Ability newAbility = ability.Clone();
        newAbility.SetLifeTime(1f);
        newAbility.SetAR(3f);
        newAbility.SetAP(100f);
        instProj.GetComponent<MonsterProjBase>().SetAbility(newAbility);
        
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
