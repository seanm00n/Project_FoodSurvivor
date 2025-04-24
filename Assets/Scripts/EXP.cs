using UnityEngine;

public class EXP : MonoBehaviour
{
    public float exp { get; private set; }

    public Zone poolKey { get; private set; }

    private Transform _nexus;

    private float _timer;

    private float _duration;

    private float _rangeSqr;

    private float _moveSpeed;

    private bool _isInRange;

    private void OnEnable() {
        _timer = 0f;
        _duration = 1f;
        _rangeSqr = 25f;
        _moveSpeed = 5f;
        _isInRange = false;
    }

    private void Start() {
        _nexus = GameObject.FindWithTag("Nexus")?.transform;
    }

    private void Update() {
        _timer += Time.deltaTime;
        if(_timer > _duration && _nexus  != null) {
            _timer = 0f;
            float distSqr = (_nexus.position - transform.position).sqrMagnitude;
            if(distSqr <= _rangeSqr) _isInRange = true;
        }

        if(_isInRange && _nexus != null) 
            transform.position = Vector3.Lerp(transform.position, _nexus.position, _moveSpeed * Time.deltaTime);
    }

    public void SetExp(float value) => exp = value;

    public void SetPoolKey(Zone value) => poolKey = value;
}
