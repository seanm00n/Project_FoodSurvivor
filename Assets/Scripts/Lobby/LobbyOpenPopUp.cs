using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class LobbyUpdateUI : MonoBehaviour
{

    public GameObject PopUp;

    private void Awake()
    {
        PopUp.SetActive(false);
    }
    public void OpenPopUp()
    {
        if (PopUp != null)
        { PopUp.SetActive(true); }
    }

}

