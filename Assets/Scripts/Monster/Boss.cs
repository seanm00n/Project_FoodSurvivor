using System;
using System.Collections;
using Unity.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Pool;

public class Boss : MonsterBase
{
    public event Action OnBossDeath;

    [SerializeField]
    private GameObject _telegraphObject;

    private int _multiAttackStack = 0;

    private int _rushAttackStack = 0;

    private SpriteRenderer _telegraphSR;

    private ObjectPool<GameObject> _multiProjPool;

    protected override void Initialize() {
        ability.SetAP(50f); // (n, n)을 string으로 수정 가능
        ability.SetHP(5000f);
        ability.SetMaxHP(5000f);
        ability.SetAS(0.5f); // attack per second
        ability.SetAR(0f); // attack range
        ability.SetMS(1f); // move speed
        ability.SetLifeTime(1.5f); // proj lifetime
        ability.SetExp(0);

        _telegraphSR = _telegraphObject.GetComponent<SpriteRenderer>();
        _multiProjPool = GM.I.bossProjPool;
    }

    protected override void HandleDeath() {
        OnBossDeath?.Invoke();
        _state = State.Death;
        SetState(State.Death);
        GetComponent<BoxCollider2D>().enabled = false;
    }

    protected override void HandleAttack() {
        if(_state == State.Death || _state == State.Attack) return;

        if(_multiAttackStack >= 5) {
            _multiAttackStack = 0;
            StartCoroutine(MultiAttack());
            ability.SetAR(0f);
            return;
        }

        if(_rushAttackStack >= 9) {
            _rushAttackStack = 0;
            RushAttack();
            ability.SetAR(0f);
            return;
        }

        NormalAttack();
    }

    private void NormalAttack() { // 근접 공격
        base.HandleAttack();
        _multiAttackStack++;
        _rushAttackStack++;
        if(_multiAttackStack >= 5 || _rushAttackStack >= 9) {
            ability.SetAR(3f);
        }
    }

    private IEnumerator MultiAttack() { // 여러발 공격
        _state = State.Attack;
        _animator.SetTrigger("Multi");
        _telegraphSR.sprite = _spriteRenderer.sprite;
        _telegraphObject.SetActive(true);
        yield return new WaitForSeconds(1f);

        for(int i = 0; i < 8; ++i) {
            for(int index = 0; index < 24; ++index) {
                GameObject instProj = _multiProjPool.Get(); //Instantiate(_multiProjPref, transform.position, Quaternion.Euler(0, 0, index * 15)); 

                Ability newAbility = ability.Clone();
                newAbility.SetAR(1f);
                newAbility.SetLifeTime(2f);

                instProj.transform.position = transform.position;
                instProj.transform.rotation = Quaternion.Euler(0f, 0f, index * 15);
                instProj.GetComponent<MonsterProjBase>().SetAbility(newAbility);
            }
            yield return new WaitForSeconds(0.125f);
        }
        _telegraphObject.SetActive(false);
        ResetState();
    }

    private IEnumerator RushAttack() { // 돌진 공격
        _state = State.Attack;
        _animator.SetTrigger("Rush"); // idle and turn red
        _telegraphSR.sprite = _spriteRenderer.sprite;
        _telegraphObject.SetActive(true);
        yield return new WaitForSeconds(1f);
        
        GameObject instProj = Instantiate(_projPref, transform);
        Ability newAbility = ability.Clone();
        newAbility.SetLifeTime(1f);
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
        ResetState();
    }
}
