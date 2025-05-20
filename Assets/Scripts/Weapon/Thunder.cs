using System.Collections;
using UnityEngine;

public class Thunder : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private void Start() {
        StartCoroutine(BeforeDestroy(1.1f));
    }

    private void Update() {
        // 애니메이션 재생 필요?
    }

    private IEnumerator BeforeDestroy(float value) {
        yield return new WaitForSeconds(value);
        // 멀리 이동시켜버리기
        transform.position = new Vector3(0, 20, 0);
        yield return new WaitForSeconds(0.1f);
        Destroy(gameObject);
    }
    public void SetAbility(Ability value) => ability = value;

    public float GetAP() => ability.AP;
}
