using System.Collections;
using Unity.VisualScripting;
using UnityEngine;

public class EXP : MonoBehaviour
{
    public float exp { get; private set; }

    public void SetExp(float value) => exp = value;

    private Transform _nexus;

    private float _timer = 0f;

    private float _duration = 1f;

    private float _rangeSqr = 25f;

    private float _moveSpeed = 5f;

    private bool _isInRange = false;

    private void Start() {
        _nexus = GameObject.FindWithTag("Nexus")?.transform;
    }

    private void Update() {
        _timer += Time.deltaTime;
        if(_timer > _duration) {
            _timer = 0f;
            float distSqr = (_nexus.position - transform.position).sqrMagnitude;
            if(distSqr <= _rangeSqr) _isInRange = true;
        }

        if(_isInRange) transform.position = Vector3.Lerp(transform.position, _nexus.position, _moveSpeed * Time.deltaTime);
    }
}
