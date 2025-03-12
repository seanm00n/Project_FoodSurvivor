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

    private Vector3 GetMouseWordPosition() { // �ؼ� �ʿ�
        Vector3 mouseScreenPosition = Input.mousePosition;
        mouseScreenPosition.z = Mathf.Abs(_mainCamera.transform.position.z - transform.position.z);
        return _mainCamera.ScreenToWorldPoint(mouseScreenPosition);
    } 

    private void OnMouseDown() {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        // ������ ��� ������Ʈ�� ����
        RaycastHit2D[] hits = Physics2D.RaycastAll(mousePos, Vector2.zero, Mathf.Infinity, _layerMask);

        foreach(RaycastHit2D hit in hits) {
            if(hit.collider.gameObject == gameObject) // ���� ������Ʈ���� Ȯ��
            {
                _isSelected = true;
                _offset = transform.position - GetMouseWordPosition();
                Debug.Log("Clicked on: " + gameObject.name);
                return; // �ϳ��� ó���ϰ� ����
            }
        }
    }

    private void OnMouseUp() {
        _isSelected = false;
    }
}
