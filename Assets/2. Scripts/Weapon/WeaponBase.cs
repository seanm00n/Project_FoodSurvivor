using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class WeaponBase : MonoBehaviour
{
    protected BattleData _battleData;
    private bool _isSelected = false;
    private Camera _mainCamera;
    private Vector3 _offset; // Ŭ�� �� ������Ʈ Ʀ ����
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

    private Vector3 GetMouseWordPosition() { // �ؼ� �ʿ�
        Vector3 mouseScreenPosition = Input.mousePosition;
        mouseScreenPosition.z = Mathf.Abs(_mainCamera.transform.position.z - transform.position.z);
        return _mainCamera.ScreenToWorldPoint(mouseScreenPosition);
    }

    private void OnMouseDown() {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        // Ư�� ���̾ ����
        int layerMask = 1 << LayerMask.NameToLayer("Player");

        // �ش� ��ġ���� Player ���̾��� ������Ʈ ����
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
