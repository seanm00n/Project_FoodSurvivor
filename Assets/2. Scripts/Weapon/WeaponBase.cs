using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class WeaponBase : MonoBehaviour
{
    protected BattleData _battleData;
    protected event Action _SkillQueue;

    [SerializeField] private GameObject _rainFirePref;

    private bool _isSelected = false;
    private Camera _mainCamera;
    private Vector3 _offset; // 클릭 시 오브젝트 튐 방지
    private bool _isSwitching = false;
    //private LayerMask _layerMask;

    protected virtual void Start() {
        _battleData = this.gameObject.GetComponentInChildren<BattleData>();
        Initialize();
        SetCamera();
        //_layerMask = LayerMask.GetMask("Player");
    }

    protected virtual void Update() {
        WeaponMovement();
        if(Input.GetKeyDown(KeyCode.E)) {
            AddRainFire(); // tmp
        }
        if(Input.GetKeyDown(KeyCode.R)) {
            Switching();
            //AddSwitching(); // tmp
        }
        UseSkill();
    }

    protected abstract void Initialize();

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

    private void AddRainFire() {
        _SkillQueue += RainFire;
    }

/*    private void AddSwitching() {
        _SkillQueue += Switching;
    }*/

    protected void RainFire() {
        Instantiate(_rainFirePref, this.transform);
        _SkillQueue -= RainFire;
    }

    protected void Switching() {
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

    protected void UseSkill() {
        _SkillQueue?.Invoke();
    }

    private void OnMouseUp() {
        _isSelected = false;
    }
}
