using System.Collections;
using UnityEngine;
using UnityEngine.Tilemaps;

public class CameraMovement : MonoBehaviour
{
    [SerializeField]
    private Tilemap _tilemap;

    private Weapon _player;

    //private float cameraOffset = 2f; // 화면 이동 거리

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
        //FixedMovement();
    }

    private void FixedMovement() {
        if(_player == null || !_player.touchEnable) return;

        Vector3 targetPos = new Vector3(_player.transform.position.x, _player.transform.position.y, transform.position.z);
        //float distance = Vector2.Distance(_player.transform.position, transform.position);

        if(IsPlayerBeyond()) { //distance >= cameraOffset

            float clampX = Mathf.Clamp(targetPos.x, minX, maxX);
            float clampY = Mathf.Clamp(targetPos.y, minY, maxY);
            Vector3 clampPos = new Vector3(clampX, clampY, targetPos.z); // 제한

            transform.position = Vector3.SmoothDamp(transform.position, clampPos, ref _velocity, _smoothTime);
        }
    }

    public IEnumerator SmoothCameraTransition(Vector3 targetPos, float duration) {
        Vector3 startPos = transform.position;
        float elapsedTime = 0f;

        while(elapsedTime < duration) {
            while(GM.isPaused) yield return null;
            elapsedTime += Time.unscaledDeltaTime;
            float t = elapsedTime / duration;

            transform.position = new Vector3(
                Mathf.Lerp(startPos.x, targetPos.x, t),
                Mathf.Lerp(startPos.y, targetPos.y, t),
                startPos.z // z 값은 변하지 않음
            );

            yield return null;
        }

        transform.position = new Vector3(targetPos.x, targetPos.y, transform.position.z);
    }

    private bool IsPlayerBeyond() {
        Vector3 viewportPos = Camera.main.WorldToViewportPoint(_player.transform.position);

        float offsetX = Mathf.Abs(viewportPos.x - 0.5f);
        float offsetY = Mathf.Abs(viewportPos.y - 0.5f);

        return (offsetX > 0.35f) || (offsetY > 0.3f);
    }
}