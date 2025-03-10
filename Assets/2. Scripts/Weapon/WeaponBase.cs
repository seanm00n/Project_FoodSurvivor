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

    protected virtual void Start() {
        _battleData = this.gameObject.GetComponent<BattleData>();
        Initialize();
        SetCamera();
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
        _isSelected = true;
        _offset = transform.position - GetMouseWordPosition();
    }

    private void OnMouseUp() {
        _isSelected = false;
    }
//------------------------------------------------------------------------------------------
    public float GetWeaponAttackPoint() {
        return _battleData._attackPoint;
    }

}
