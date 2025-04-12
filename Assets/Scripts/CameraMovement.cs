using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    private Weapon _player;

    private float cameraOffset = 2f; // 화면 이동 거리

    private float _smoothTime = 0.3f;

    private Vector3 _velocity = Vector3.zero;

    private void Awake() {
        _player = Weapon.I;
    }

    private void LateUpdate() { // ?
        if(_player == null) return;

        float distance = Vector2.Distance(_player.transform.position, transform.position);
        if(distance >= cameraOffset) {
            Vector3 targetPos = new Vector3(_player.transform.position.x, _player.transform.position.y, transform.position.z);
            transform.position = Vector3.SmoothDamp(transform.position, targetPos, ref _velocity, _smoothTime);
        }
    }
}