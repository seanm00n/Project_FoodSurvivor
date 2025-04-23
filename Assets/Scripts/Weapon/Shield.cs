using System.Collections;
using UnityEngine;

public class Shield : MonoBehaviour, IBattle {
    public Ability ability { get; private set; }

    private float _rotateSpeed = 120f;

    private void Update() {
        Rotation();
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("MonsterProj")) {
            Destroy(collision.gameObject);
        }

        if(collision.CompareTag("Monster")) {
            StartCoroutine(PushMob(collision));
        }
    }

    private IEnumerator PushMob(Collider2D collision) {
        float pushPower = 1f;

        Vector2 pushDir = (collision.transform.position - transform.parent.position).normalized;
        collision.GetComponent<Rigidbody2D>().AddForce(pushDir * pushPower, ForceMode2D.Impulse);
        yield return new WaitForSeconds(0.2f);
        if(collision != null) collision.attachedRigidbody.linearVelocity = Vector2.zero;
    }

    private void Rotation() {
        transform.Rotate(Vector3.forward * _rotateSpeed * Time.deltaTime);
        transform.localPosition = Vector3.zero;
    }

    public void SetAbility(Ability value) => ability = value;

    public float GetAP() => ability.AP;
}