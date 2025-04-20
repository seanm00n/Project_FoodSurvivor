using UnityEngine;

public class NoRotation : MonoBehaviour {
    Quaternion initialRotation;

    void Start() {
        initialRotation = transform.rotation;
    }

    void LateUpdate() {
        transform.rotation = initialRotation;
    }
}
