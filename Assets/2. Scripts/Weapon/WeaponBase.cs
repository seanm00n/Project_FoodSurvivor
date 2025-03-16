using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class WeaponBase : MonoBehaviour
{
    protected BattleData _battleData;

    [SerializeField]
    protected float attackPoint;
    [SerializeField]
    protected float attackSpeed;

    [SerializeField] private GameObject _rainFirePref;

    [HideInInspector]
    public event Action _OnExpGet;
    [HideInInspector]
    public int _combo;
    [HideInInspector]
    public bool _rainFireActive;
    [HideInInspector]
    public bool _switchingActive;


    private bool _isSelected;
    private bool _isSwitching;
    private Camera _mainCamera;
    private Vector3 _offset; // 클릭 시 오브젝트 튐 방지
    //private LayerMask _layerMask;

    protected abstract void Initialize();

    protected virtual void Start() {
        _battleData = this.gameObject.GetComponentInChildren<BattleData>();
        _OnExpGet += HandleExpGet;
        Initialize();
        SetCamera();
        _combo = 0;
        _rainFireActive = false;
        _switchingActive = false;
        _isSelected = false;
        _isSwitching = false;
        _battleData._attackPoint = this.attackPoint;
        _battleData._attackSpeed = this.attackSpeed;
        //_layerMask = LayerMask.GetMask("Player");
    }

    protected virtual void Update() {
        WeaponMovement();
        CalcCombo();
        if(Input.GetKeyDown(KeyCode.E)) { // 버튼 입력으로 수정
            RainFire();
        }

        if(Input.GetKeyDown(KeyCode.R)) { // 버튼 입력으로 수정
            Switching();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("EXP")) {
            Destroy(collision.gameObject);
            _OnExpGet?.Invoke();
        }
    }

    private void CalcCombo() {
        if(_combo >= 50) {
            _rainFireActive = true;
        } else {
            _rainFireActive = false;
        }

        if(_combo >= 100) {
            _switchingActive = true;
        } else {
            _switchingActive = false;
        }
    }

    private void HandleExpGet() {
        this._battleData._attackPoint += 0.01f; // 넥서스도 올라야함

        Debug.Log("EXP get: " + _battleData._attackPoint);
    }

    private void SetCamera() {
        _mainCamera = Camera.main;
        if(_mainCamera == null) {
            Debug.Log("no main camear detected");
        }
    }

    private void WeaponMovement() {
        if(_isSelected && !_isSwitching) {
            transform.position = GetMouseWorldPosition() + _offset;
        }
    }

    private Vector3 GetMouseWorldPosition() { // 해석 필요
        Vector3 mouseScreenPosition = Input.mousePosition;
        //mouseScreenPosition.z = Mathf.Abs(_mainCamera.transform.position.z - transform.position.z);
        mouseScreenPosition.z = 0;
        return _mainCamera.ScreenToWorldPoint(mouseScreenPosition);
    }

    private void OnMouseDown() {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        // 특정 레이어만 감지
        int layerMask = 1 << LayerMask.NameToLayer("Player");

        // 해당 위치에서 Player 레이어의 오브젝트 감지
        Collider2D hitCollider = Physics2D.OverlapPoint(mousePos, layerMask);

        if(hitCollider != null && hitCollider.gameObject == gameObject) {
            _isSelected = true;
            _offset = transform.position - GetMouseWorldPosition();
        }
    }

/*    private void AddRainFire() {
        _SkillQueue += RainFire;
    }

    private void AddSwitching() {
        _SkillQueue += Switching;
    }*/

    protected void RainFire() {
        if(!_rainFireActive) return;

        GameObject instantiatedRainFire = Instantiate(_rainFirePref, this.transform);
        instantiatedRainFire.GetComponent<WeaponSkillBase>().SetValue(_battleData._attackPoint, _battleData._attackSpeed);
        _combo -= 50;
    }

    protected void Switching() {
        if(!_switchingActive) return;

        _isSwitching = true;
        GameObject nexus = GameObject.FindGameObjectWithTag("Nexus");
        Vector3 pos = transform.position;
        transform.position = nexus.transform.position;
        nexus.transform.position = pos;

        Vector2 newCameraPos = new Vector2(transform.position.x, transform.position.y);
        Vector2 mousePos = GetMouseWorldPosition();
        Vector3 result = mousePos - newCameraPos;

        Vector3 targetPos = _mainCamera.transform.position - new Vector3(result.x, result.y, 0);
        StartCoroutine(SmoothCameraTransition(targetPos, 0.2f));
        //_mainCamera.transform.position -= new Vector3(result.x, result.y, _mainCamera.transform.position.z);
        StartCoroutine(ResumeWeaponMovement());
        _combo -= 100;
    }

    private IEnumerator ResumeWeaponMovement() {
        yield return new WaitForSeconds(0.4f); // 짧은 대기 후 이동 가능
        _isSwitching = false;
    }

    private IEnumerator SmoothCameraTransition(Vector3 targetPos, float duration) {
        Vector3 startPos = _mainCamera.transform.position;
        float elapsedTime = 0f;

        while(elapsedTime < duration) {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / duration;

            // 🔹 Lerp를 사용하되, z 값은 기존 값을 유지
            _mainCamera.transform.position = new Vector3(
                Mathf.Lerp(startPos.x, targetPos.x, t),
                Mathf.Lerp(startPos.y, targetPos.y, t),
                startPos.z // 🔹 z 값은 변하지 않음
            );

            yield return null; // 한 프레임 대기
        }
    }

    private void OnMouseUp() {
        _isSelected = false;
    }

   
}
