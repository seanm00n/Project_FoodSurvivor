using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class LobbyClick : MonoBehaviour, IPointerUpHandler, IPointerDownHandler 
{
    public Image image;
    public Sprite newSprite;
    public Sprite oldSprite;
    public AudioSource clickAudio;
    // Start is called before the first frame update
    void Start()
    {

    }
    // Update is called once per frame
    void Update()
    {

    }

    public void OnPointerDown(PointerEventData eventData)
    {
        image.sprite = newSprite;
    }

    public void OnPointerUp (PointerEventData eventData) {
        image.sprite = oldSprite;
    }
     public void pressButton()
    {
        clickAudio.Play();
    }
  
  
}
