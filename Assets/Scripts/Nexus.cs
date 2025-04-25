 using System;
using System.Collections;
using UnityEngine;

public class Nexus : MonoBehaviour
{
    public static Nexus I { get; private set; }

    public event Action<Nexus> OnNexusDeath;

    public event Action OnGameOver;

    public event Action<Nexus> OnNexusHit;

    public Ability ability { get; private set; }

    [SerializeField]
    private AudioClip _hitSound;

    #region Member ref

    private Weapon _weapon;

    private SpriteRenderer _spriteRenderer;

    private Animator _animator;

    private AudioSource _audioSource;

    private BoxCollider2D _coll;

    #endregion

    #region Member var

    private float _moveOffset = 1f;

    private float _duration = 1f; // 주기

    private float _elapsedTime = 0f; // 경과 시간

    private bool _isDeath = false;

    #endregion

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        ability = new Ability();
        ability.SetMaxHP(1000f);
        ability.SetHP(1000f);
        //ability.SetMaxHP(1); ability.SetHP(1); // for test
        //ability.SetMaxHP(100000f); ability.SetHP(100000f); // for test
        ability.SetMS(1.5f);

        _spriteRenderer = GetComponent<SpriteRenderer>();
        _animator = GetComponent<Animator>();
        _coll = GetComponent<BoxCollider2D>();
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>(); // 초기화 시점 문제로 사용
        _audioSource = GetComponent<AudioSource>();
        _animator.SetBool("Walk", true);
    }

    private void Update() {
        if(!_isDeath) { 
            Movement();
            Rotation();
        }
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
            EXP collExp = collision.GetComponent<EXP>();
            _weapon.HandleExpGet(collExp.exp);
            GM.I.mobExpPool[collExp.poolKey].Release(collision.gameObject);
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
        OnNexusDeath?.Invoke(this);
        _coll.enabled = false;
        _isDeath = true;
        _animator.SetTrigger("Die");
        _animator.SetBool("Walk", false);
        StartCoroutine(DestroyNexus(_animator.GetCurrentAnimatorStateInfo(0).length));
    }

    private IEnumerator DestroyNexus(float value) {
        yield return new WaitForSeconds(value);
        OnGameOver.Invoke();
        Destroy(gameObject);
    }

    private void OnDestroy() {
        I = null;
    }
}