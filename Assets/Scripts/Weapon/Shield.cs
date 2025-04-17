using UnityEngine;

public class Shield : MonoBehaviour
{
    Quaternion initialRotation;

    void Start() {
        initialRotation = transform.rotation;
    }

    void LateUpdate() {
        transform.rotation = initialRotation;
    }
}
