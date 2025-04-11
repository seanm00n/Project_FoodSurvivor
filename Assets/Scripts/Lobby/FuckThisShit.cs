using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class FuckThisShit : MonoBehaviour
{
    public Image imageA;
    public Image imageB;

    void Start()
    {
        // Ensure ImageB is initially hidden
        imageB.gameObject.SetActive(false);

        // Add click listeners
        imageA.GetComponent<Button>().onClick.AddListener(OnImageAClicked);
        imageB.GetComponent<Button>().onClick.AddListener(OnImageBClicked);
    }

    void OnImageAClicked()
    {
        imageB.gameObject.SetActive(true);
    }

    void OnImageBClicked()
    {
        imageB.gameObject.SetActive(false);
    }
}
