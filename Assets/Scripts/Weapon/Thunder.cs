using System.Collections;
using UnityEngine;

public class Thunder : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private Animator _animator;

    private void Start() {
        _animator = GetComponent<Animator>();
        float animLength = _animator.GetCurrentAnimatorStateInfo(0).length;
        StartCoroutine(BeforeDestroy(animLength));
    }

    private IEnumerator BeforeDestroy(float value) {
        yield return new WaitForSeconds(value);
        transform.position = new Vector3(0, 20, 0); // 멀리 이동시켜버리기
        yield return new WaitForSeconds(0.02f);
        Destroy(gameObject);
    }
    public void SetAbility(Ability value) => ability = value;

    public float GetAP() => ability.AP;
}
