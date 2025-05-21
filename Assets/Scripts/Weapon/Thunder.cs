using System.Collections;
using UnityEngine;

public class Thunder : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private AudioSource _audioSource;

    [SerializeField]
    private AudioClip _thunderSound;

    private void Start() {
        _audioSource = GetComponent<AudioSource>();
        float animLength = GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length;
        StartCoroutine(BeforeDestroy(animLength));
    }

    private IEnumerator BeforeDestroy(float value) {
        _audioSource.PlayOneShot(_thunderSound);
        yield return new WaitForSeconds(value);
        transform.position = new Vector3(0, 20, 0); // 멀리 이동시켜버리기
        yield return new WaitForSeconds(0.02f);
        Destroy(gameObject);
    }
    public void SetAbility(Ability value) => ability = value;

    public float GetAP() => ability.AP;
}
