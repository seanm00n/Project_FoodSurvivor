using UnityEngine;
using UnityEngine.UI;

public class GiantAttackMelee : MonsterBase
{
    public override string poolKey { get; protected set; } = "GiantAttackMelee";

    [SerializeField]
    private Slider _healthBar;

    public override void Initialize() {
        base.Initialize(); // °ª ¼öÁ¤
        ability.SetAP(150f);
        ability.SetHP(2500f);
        ability.SetMaxHP(2500f);
        ability.SetAS(0.3f);
        ability.SetAR(0f);
        ability.SetMS(3f);
        ability.SetLifeTime(100f);
        ability.SetExp(0);
    }

    protected override void OnEnable() {
        base.OnEnable();
        gameObject.GetComponent<GiantAttackMeleeProj>().OnGiantHitNexus += HandleDeath;
    }

    protected override void OnDisable() {
        base.OnDisable();
        gameObject.GetComponent<GiantAttackMeleeProj>().OnGiantHitNexus -= HandleDeath;
    }

    protected override void Repeat() {
        SetSliderUI();
    }

    protected override void HandleDeath() {
        if(_state == State.Death) return;
        _state = State.Death;
        _boxColl.enabled = false;
        _animator.SetBool("Walk", false);
        _animator.SetTrigger("Die");
        _hitEffectObject.SetActive(false);
        StopAllCoroutines();
        if(!gameObject.activeInHierarchy) {
            Debug.Log("reached DropAndRelease coroutine during death");
            return;
        }
        StartCoroutine(JustRelease());
    }

    private void SetSliderUI() {
        float curBossHP = ability.HP;
        float maxBossHP = ability.MaxHP;
        _healthBar.value = curBossHP / maxBossHP;
    }

    protected override void HandleAttack() {
        //
    }
}
