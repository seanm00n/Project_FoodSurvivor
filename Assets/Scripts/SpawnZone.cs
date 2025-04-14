using UnityEngine;

public class SpawnZone : MonoBehaviour
{
    [SerializeField]
    private Zone _zone;

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.CompareTag("Player")) {
            Debug.Log("Player out of line");
            GM.I.SetZoneOut(_zone);
        }
    }
}
