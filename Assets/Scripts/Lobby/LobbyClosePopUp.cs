using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyClosePopUp : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject PopUp;
    private void Update()
    {
        void OnMouseDown()
        {
            PopUp.SetActive(false);
        }
    }
    
}
