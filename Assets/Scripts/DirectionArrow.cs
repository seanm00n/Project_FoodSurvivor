using TreeEditor;
using UnityEngine;
using static UnityEditor.Experimental.GraphView.GraphView;

public class DirectionArrow : MonoBehaviour
{
    private GameObject _nexus;

    private RectTransform _rectTransform;

    private Vector3 _velocity = Vector3.zero;

    private float _smoothTime = 0.2f;

    private void Start() {
        _nexus = GameObject.FindWithTag("Nexus");
        _rectTransform = GetComponent<RectTransform>();
    }

    private void FixedUpdate() {
        Movement();
        Rotation();
    }

    private void Movement() {
        Vector3 nexusWorldPos = _nexus.transform.position;
        Vector3 screenPos = Camera.main.WorldToScreenPoint(nexusWorldPos);

        float width = _rectTransform.rect.width;
        float height = _rectTransform.rect.height;

        screenPos.x = Mathf.Clamp(screenPos.x, width / 2, Screen.width - width / 2);
        screenPos.y = Mathf.Clamp(screenPos.y, height / 2, Screen.height - height / 2);

        _rectTransform.position = Vector3.SmoothDamp(_rectTransform.position, screenPos, ref _velocity, _smoothTime);
    }

    private void Rotation() {
        Vector3 nexusWorldPos = _nexus.transform.position;
        Vector3 screenPos = Camera.main.WorldToScreenPoint(nexusWorldPos);

        Vector3 direction = screenPos - _rectTransform.position;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        _rectTransform.rotation = Quaternion.Euler(0, 0, angle);
    }
}
