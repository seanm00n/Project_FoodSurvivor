using UnityEngine;

public class NoRotationUI : MonoBehaviour {
    private Quaternion initialRotation;

    void Start() {
        // 자식 오브젝트의 초기 회전을 저장
        initialRotation = transform.rotation;
    }

    void LateUpdate() {
        // 프레임마다 초기 회전값으로 되돌림 (부모 회전 영향 무시)
        transform.rotation = initialRotation;
    }
}
