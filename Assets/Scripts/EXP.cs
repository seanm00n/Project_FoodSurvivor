using System.Collections;
using UnityEngine;

public class EXP : MonoBehaviour
{
    private Collider2D _coll;

    private void Start() {
        _coll = GetComponent<Collider2D>();
    }

    public float exp { get; private set; }

    public void SetExp(float exp) {
        this.exp = exp;
    }
}
