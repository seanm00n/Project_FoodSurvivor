using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class WeaponBase : MonoBehaviour
{
    protected BattleData _battleData;
    private bool _isSelected = false;
    private Camera _mainCamera;
    private Vector3 _offset; // 클릭 시 오브젝트 튐 방지
    private LayerMask _layerMask;

    protected virtual void Start() {
        _battleData = this.gameObject.GetComponentInChildren<BattleData>();
        Initialize();
        SetCamera();
        _layerMask = LayerMask.GetMask("Player");
    }

    protected virtual void Update() {
        WeaponMovement();
    }

    protected abstract void Initialize();

    private void SetCamera() {
        _mainCamera = Camera.main;
        if(_mainCamera == null) {
            Debug.Log("no main camear detected");
        } else {
            Debug.Log(_mainCamera.transform.position);
        }
    }

    private void WeaponMovement() {
        if(_isSelected) {
            transform.position = GetMouseWordPosition() + _offset;
        }
    }

    private Vector3 GetMouseWordPosition() { // 해석 필요
        Vector3 mouseScreenPosition = Input.mousePosition;
        mouseScreenPosition.z = Mathf.Abs(_mainCamera.transform.position.z - transform.position.z);
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
            _offset = transform.position - GetMouseWordPosition();
        }
    }

    private void OnMouseUp() {
        _isSelected = false;
    }
}
