using System.Collections;
using UnityEngine;

public class SpawnZone : MonoBehaviour
{
    [SerializeField]
    private Zone _zone;

    private bool _initialized = false;

    private void Start() {
        StartCoroutine(InitDelay());
    }

    private IEnumerator InitDelay() {
        yield return new WaitForSeconds(0.1f);
        _initialized = true;
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if((!_initialized)) return;

        if(collision.transform.root.CompareTag("Player")) {
            GM.I.SetZoneOut(_zone);
        }
    }
}
