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
        _battleData = this.gameObject.GetComponent<BattleData>();
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

        // 겹쳐진 모든 오브젝트를 감지
        RaycastHit2D[] hits = Physics2D.RaycastAll(mousePos, Vector2.zero, Mathf.Infinity, _layerMask);

        foreach(RaycastHit2D hit in hits) {
            if(hit.collider.gameObject == gameObject) // 현재 오브젝트인지 확인
            {
                _isSelected = true;
                _offset = transform.position - GetMouseWordPosition();
                Debug.Log("Clicked on: " + gameObject.name);
                return; // 하나만 처리하고 종료
            }
        }
    }

    private void OnMouseUp() {
        _isSelected = false;
    }
}
