using System;
using System.Collections;
using UnityEngine;

public class Nexus : MonoBehaviour
{
    public static Nexus I { get; private set; }

    public event Action<Nexus> OnNexusDeath;

    public event Action<Nexus> OnNexusHit;

    public Ability ability { get; private set; }

    #region Member ref

    private Weapon _weapon;

    private SpriteRenderer _spriteRenderer;

    private Animator _animator;

    #endregion

    #region Member variable

    private float _lastMovedTime;

    private float _moveOffset;

    private bool _isMoving;

    #endregion

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        _spriteRenderer = GetComponent<SpriteRenderer>(); 

        _lastMovedTime = 0f;
        _moveOffset = 1.5f;
        _isMoving = false;

        ability = new Ability();
        ability.SetMaxHP(500f);
        //ability.SetHP(500f);
        ability.SetHP(5000000f);
        ability.SetMS(1f);

        _animator = GetComponent<Animator>();
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>(); // 초기화 시점 문제로 사용
    }

    private void Update() {
        Movement();
    }

    private void Movement() {
        if(!_isMoving && Time.time - _lastMovedTime > 1.5f ) {
            float distance = Vector2.Distance(_weapon.transform.position, this.transform.position);
            if(distance > _moveOffset ) {
                _lastMovedTime = Time.time;
                StartCoroutine(MoveToTarget());
                StartCoroutine(RotateToTarget());
            }
        }
    }

    private IEnumerator MoveToTarget() {
        _isMoving = true;
        SetState(State.Moving);
        Vector2 direction = (_weapon.transform.position - this.transform.position).normalized;
        float timer = Time.time;
        while(Time.time - timer < 1f) {
            this.transform.position += (Vector3)direction * ability.MS * Time.deltaTime;
            yield return null;
        }
        _isMoving = false;
    }

    private IEnumerator RotateToTarget() {
        float duration = 1.5f; // 주기
        float elapsedTime = 0f; // 경과 시간

        while(elapsedTime < duration) {
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        elapsedTime = 0f;
        Vector3 direction = _weapon.transform.position - this.transform.position;

        if(direction.x >= 0) {
            _spriteRenderer.flipX = false;
        } else {
            _spriteRenderer.flipX = true;
        }

    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("MonsterProj")) {
            HandleHit(collision.gameObject);
        }
    }

    private void HandleHit(GameObject target) {
        _animator.SetTrigger("Hit");
        ability.SetHP(ability.HP - target.GetComponent<MonsterProjBase>().GetAP());
        OnNexusHit.Invoke(this);
        CheckDeath();
    }

    private void CheckDeath() {
        if(ability.HP <= 0f) {
            OnNexusDeath?.Invoke(this);
            HandleDeath();
        }
    }

    private void HandleDeath() {
        SetState(State.Death);
        Destroy(gameObject, 1f);
    }

    private void OnDestroy() {
        I = null;
    }

    public void SetState(State state) { // use?
        foreach(var variable in new[] { "Walk", "Die" }) {
            _animator.SetBool(variable, false);
        }

        switch(state) {
            case State.Moving: _animator.SetBool("Walk", true); break;
            case State.Death: _animator.SetBool("Die", true); break;
            default: throw new NotSupportedException();
        }
    }
}