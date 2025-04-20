using System.Collections;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public Animator transition;
    public float transitionTime = 1f;
    public AudioSource clickAudio;

    public void OnGameStartButton()
    {
            LoadNextLevel();
            clickAudio.Play();
    }

    public void LoadNextLevel()
    {
        StartCoroutine(LoadLevel("InGame"));
    }
    IEnumerator LoadLevel(string sceneName) 
    {
        //play animation
        transition.SetTrigger("Start");

        //wait
        yield return new WaitForSeconds(transitionTime);

        //load scene
        SceneManager.LoadScene(sceneName);
    }
}
