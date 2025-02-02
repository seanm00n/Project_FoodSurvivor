using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class CameraMovement : MonoBehaviour
{
    private GameObject _player;
    private float _smoothTime = 0.3f;
    private Vector3 _velocity = Vector3.zero;
    [SerializeField]
    private float cameraOffset = 1.5f;

    private void Start() {

    }

    // 학습 필요
    private void LateUpdate() {
        if(_player == null) return;

        float distance = Vector2.Distance(_player.transform.position, this.transform.position);
        if(distance >= cameraOffset) {
            Vector3 targetPos = new Vector3(_player.transform.position.x, _player.transform.position.y, transform.position.z);
            this.transform.position = Vector3.SmoothDamp(this.transform.position, targetPos, ref _velocity, _smoothTime);
        }
    }

    /*    private bool IsInOuterEdge(Vector3 viewportPos) {
            return viewportPos.x < 0.1f || viewportPos.x > 0.9f || viewportPos.y < 0.1f || viewportPos.y > 0.9f;
        }

        private void HandleOuterEdge() {
            Vector3 playerPosition = _player.transform.position;
            Vector3 cameraPosition = Camera.main.transform.position;

            Vector3 direction = (playerPosition - cameraPosition).normalized;

            if(direction.magnitude > 0.01f) {
                Vector3 newCameraPosition = cameraPosition + direction * 0.1f;
                Camera.main.transform.position = Vector3.Lerp(cameraPosition, newCameraPosition, Time.deltaTime * _cameraSpeed);
            }
        }*/

    public void SetPlayer(GameObject player) {
        _player = player;
    }
}