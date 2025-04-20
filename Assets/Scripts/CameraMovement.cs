using UnityEngine;
using UnityEngine.Tilemaps;

public class CameraMovement : MonoBehaviour
{
    [SerializeField]
    private Tilemap _tilemap;

    private Weapon _player;

    private float cameraOffset = 2f; // 화면 이동 거리

    private float _smoothTime = 0.2f; // 0.3f

    private Vector3 _velocity = Vector3.zero;

    private float minX, maxX, minY, maxY;

    private float halfWidth, halfHeight;

    private void Start() {
        _player = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>();

        Camera mainCam = Camera.main;
        halfHeight = mainCam.orthographicSize;
        halfWidth = halfHeight * mainCam.aspect;

        Bounds bounds = _tilemap.localBounds;
        minX = bounds.min.x + halfWidth;
        maxX = bounds.max.x - halfWidth;
        minY = bounds.min.y + halfHeight;
        maxY = bounds.max.y - halfHeight;
    }

    private void FixedUpdate() {
        
        if(_player == null) return;

        Vector3 targetPos = new Vector3(_player.transform.position.x, _player.transform.position.y, transform.position.z);
        float distance = Vector2.Distance(_player.transform.position, transform.position);

        if(distance >= cameraOffset) {

            float clampX = Mathf.Clamp(targetPos.x, minX, maxX);
            float clampY = Mathf.Clamp(targetPos.y, minY, maxY);
            Vector3 clampPos = new Vector3(clampX, clampY, targetPos.z); // 제한

            transform.position = Vector3.SmoothDamp(transform.position, clampPos, ref _velocity, _smoothTime);
        }
    }
}