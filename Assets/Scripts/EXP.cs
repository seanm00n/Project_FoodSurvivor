using System.Collections;
using UnityEngine;

public class EXP : MonoBehaviour
{
    private Collider2D _coll;

    private void Start() {
        _coll = GetComponent<Collider2D>();
        //StartCoroutine(DisableCollTemp(0.5f));
    }

    public float exp { get; private set; }

    public void SetExp(float exp) {
        this.exp = exp;
    }

    private IEnumerator DisableCollTemp(float delay) { // 积己 流饶 嚼垫 规瘤
        if(_coll != null) _coll.enabled = false;

        yield return new WaitForSeconds(delay);

        if(_coll != null) _coll.enabled = true;
    }
}
