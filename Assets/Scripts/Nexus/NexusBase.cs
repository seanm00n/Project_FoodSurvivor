using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using Unity.VisualScripting;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using GameEnums;

public abstract class NexusBase : MonoBehaviour
{
    public static NexusBase I { get; private set; }

    public event Action<NexusBase> _OnNexusDeath;
    protected event Action _SkillQueue;
    protected Ability _ability;

    [SerializeField] 
    private GameObject _slowCirclePref;
    private GameObject _instantiatedSlowCircle;

    [SerializeField] private GameObject _protectShieldPref;
    private GameObject _instantiatedProtectShield;
    private Dictionary<NexusSkills, float> _skillLastUsed;
    private GameObject _playerWeapon;
    private SpriteRenderer _spriteRenderer;
    
    private float _lastMovedTime;
    private float _moveOffset;
    private bool _isMoving;

    protected abstract void Initialize();

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;
    }

    protected virtual void Start() {
        _skillLastUsed = new Dictionary<NexusSkills, float>();
        _playerWeapon = GameObject.FindWithTag("Player"); // 직접할당 보다는 빠름
        _ability = this.gameObject.GetComponent<Ability>();
        _spriteRenderer = GetComponent<SpriteRenderer>(); 
        _lastMovedTime = 0f;
        _moveOffset = 1f;
        _isMoving = false;
        _ability._HP = 500f;
        _ability._AP = 15f;
        _ability._MS = 1f;
        Initialize();
        // do some common
    }

    protected virtual void Update() {
        // do some common
        if(Input.GetKeyDown(KeyCode.Q)) {
            AddSlowCircle(); // tmp
        }
        if(Input.GetKeyDown(KeyCode.W)) {
            AddProtectShield(); // tmp
        }
        NexusMovement();
    }


    private void NexusMovement() {
        if(!_isMoving && Time.time - _lastMovedTime > 1.5f ) {
            float distance = Vector2.Distance(_playerWeapon.transform.position, this.transform.position);
            if(distance > _moveOffset ) {
                _lastMovedTime = Time.time;
                StartCoroutine(MoveToTarget());
                StartCoroutine(RotateToTarget());
            }
        }
    }

    private IEnumerator MoveToTarget() {
        _isMoving = true;
        Vector2 direction = (_playerWeapon.transform.position - this.transform.position).normalized;
        float timer = Time.time;
        while(Time.time - timer < 1f) {
            this.transform.position += (Vector3)direction * _ability._MS * Time.deltaTime;
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
        Vector3 direction = _playerWeapon.transform.position - this.transform.position;

        if(direction.x >= 0) {
            _spriteRenderer.flipX = false;
        } else {
            _spriteRenderer.flipX = true;
        }

    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("MonsterProjectile")) {
            NexusHit(collision.gameObject);
        }
    }

    protected void UseSkill() {
        _SkillQueue?.Invoke();
    }

    private void NexusHit(GameObject target) {
        Ability targetData = target?.GetComponent<Ability>();
        if(targetData != null) {
            _ability._HP -= targetData._AP;
            CheckNexusDeath();
        }
    }

    private void CheckNexusDeath() {
        if(_ability._HP <= 0f) {
            _OnNexusDeath?.Invoke(this);
            HandleNexusDeath();
        }
    }

    private void HandleNexusDeath() {
        Destroy(this.gameObject);
        //game end
    }

    protected void AddSlowCircle() {
        _SkillQueue += SlowCircle;
    }

    protected void AddProtectShield() {
        _SkillQueue += ProtectShield;
    }

    protected void ProtectShield() { // protect shield
        if(_instantiatedProtectShield == null) {
            Debug.Log("protectshield");
            _instantiatedProtectShield = Instantiate(_protectShieldPref, this.transform);
            _instantiatedProtectShield.GetComponent<NexusSkillBase>().SetValue(_ability._AP, _ability._MS);
            _skillLastUsed[NexusSkills.ProtectShield] = Time.time;
            float skillCooldown = 9999f;
            if(Time.time - _skillLastUsed[NexusSkills.ProtectShield] >= skillCooldown) {
                _skillLastUsed[NexusSkills.ProtectShield] = Time.time;
            }
        }
    }

    protected void SlowCircle() {
        if(_instantiatedSlowCircle == null) {
            Debug.Log("slowcircle");
            _instantiatedSlowCircle = Instantiate(_slowCirclePref, this.transform);
            _instantiatedSlowCircle.GetComponent<NexusSkillBase>().SetValue(_ability._AP, _ability._MS);
            _skillLastUsed.TryAdd(NexusSkills.SlowCircle, Time.time);
            float skillCooldown = 9999f;
            if(Time.time - _skillLastUsed[NexusSkills.SlowCircle] >= skillCooldown) {
                _skillLastUsed[NexusSkills.SlowCircle] = Time.time;
            }
        }
    }
}
// invoke는 통보용, 로직은 클래스 내에서 이어지도록, 느슨한 결합