using System.Collections;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public Animator transition;
    public float transitionTime = 1f;
    public AudioSource clickAudio;

    public void FadeIn()
    {
        transition.SetTrigger("FadeIn");
    }
    public void FadeOut()
    {
        transition.SetTrigger("FadeOut");
    }

    public void OnGameStartButton()
    {
        FadeOut();
        StartCoroutine(LoadLevel("InGame"));
    }

    IEnumerator LoadLevel(string sceneName)
    {
        //wait
        yield return new WaitForSeconds(transitionTime);

        //load scene
        SceneManager.LoadScene(sceneName);
    }
 
}