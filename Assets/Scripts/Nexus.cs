 using System;
using System.Collections;
using UnityEngine;

public class Nexus : MonoBehaviour
{
    public static Nexus I { get; private set; }

    public event Action<Nexus> OnNexusDeath;

    public event Action<Nexus> OnNexusHit;

    public Ability ability { get; private set; }

    [SerializeField]
    private AudioClip _hitSound;

    #region Member ref

    private Weapon _weapon;

    private SpriteRenderer _spriteRenderer;

    private Animator _animator;

    private AudioSource _audioSource;

    #endregion

    #region Member variable

    private float _moveOffset = 1f;

    float _duration = 1f; // 주기

    float _elapsedTime = 0f; // 경과 시간


    #endregion

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;


        ability = new Ability();
        ability.SetMaxHP(500f);
        ability.SetHP(1000f);
        //ability.SetHP(100000f);//test
        ability.SetMS(1.5f);

        _spriteRenderer = GetComponent<SpriteRenderer>();
        _animator = GetComponent<Animator>();
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>(); // 초기화 시점 문제로 사용
        _audioSource = GetComponent<AudioSource>();
        SetState(State.Moving);
    }

    private void Update() {
        Movement();
        Rotation();
    }

    private void Movement() {
        if(_weapon != null) {
            float distance = Vector2.Distance(_weapon.transform.position, transform.position);
            if(distance > _moveOffset) {
                Vector2 direction = (_weapon.transform.position - transform.position).normalized;
                transform.position += (Vector3)direction * ability.MS * Time.deltaTime;
            }
        }
    }

    private void Rotation() {
        _elapsedTime += Time.deltaTime;

        if(_elapsedTime > _duration) {
            _elapsedTime = 0f;
            Vector3 direction = _weapon.transform.position - transform.position;
            if(direction.x >= 0) {
                _spriteRenderer.flipX = false;
            } else {
                _spriteRenderer.flipX = true;
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("MonsterProj")) {
            HandleHit(collision.gameObject);
        }

        if(collision.CompareTag("EXP")) {
            _weapon.HandleExpGet(collision.GetComponent<EXP>().exp);
            Destroy(collision.gameObject);
        }
    }

    private void HandleHit(GameObject target) {
        _animator.SetTrigger("Hit");
        _audioSource.PlayOneShot(_hitSound);
        ability.SetHP(ability.HP - target.GetComponent<MonsterProjBase>().GetAP());
        OnNexusHit.Invoke(this);
        CheckDeath();
    }

    private void CheckDeath() {
        if(ability.HP <= 0f) {
            HandleDeath();
        }
    }

    private void HandleDeath() {
        SetState(State.Death);
        StartCoroutine(InvokeDeath());
        Destroy(gameObject, 0.5f);
    }

    private void OnDestroy() {
        I = null;
    }

    private IEnumerator InvokeDeath() {
        yield return new WaitForSeconds(0.5f);
        OnNexusDeath?.Invoke(this);
    }

    public void SetState(State state) {
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