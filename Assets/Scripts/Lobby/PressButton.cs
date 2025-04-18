using UnityEngine;
using UnityEngine.Audio;

public class PressButton : MonoBehaviour
{
    public AudioSource footeraudio1;
    public AudioSource footeraudio2;


    public void footerButton1()
    {
        footeraudio1.time = 0.1f;
        footeraudio1.Play();
    }

    public void footerButton2()
    {
        footeraudio2.Play();
    }
}
