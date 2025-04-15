using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.UI;
using AYellowpaper.SerializedCollections;
using UnityEditor.Experimental.GraphView;
using TMPro;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public static UIManager I { get; private set; }

    public SerializedDictionary<Skill, List<GameObject>> cardPrefs;

    public SerializedDictionary<Skill, Texture2D> _iconList;

    #region SerializeField

    [SerializeField]
    private List<GameObject> _skilBoxList;

    [SerializeField]
    private GameObject _skillSelectPanel;

    [SerializeField]
    private GameObject _pausePanel;

    [SerializeField]
    private GameObject _gameOverPanel;
    
    [SerializeField]
    private TextMeshProUGUI _killCountText;

    [SerializeField]
    private TextMeshProUGUI _playTimeText;

    [SerializeField]
    private TextMeshProUGUI _switchCoolText;

    [SerializeField]
    private TextMeshProUGUI _killResultText;

    [SerializeField]
    private TextMeshProUGUI _timeResultText;


    #endregion

    private Weapon _weapon;

    private List<Skill> _options;

    private List<GameObject> _instCards;

    private float _spacing = 300f;

    private int _iconNum = 0;

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        _options = Enum.GetValues(typeof(Skill)).Cast<Skill>().ToList();
        _instCards = new List<GameObject>();
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>();
        _skillSelectPanel.SetActive(false);
        _pausePanel.SetActive(false);
        _gameOverPanel.SetActive(false);
    }

    private void Update() {
        SetPlayTimeText();
        SetSwitchCoolText();
    }

    private void SetPlayTimeText() {
        float time = Time.time;
        int minutes = Mathf.FloorToInt(time / 60);
        int seconds = Mathf.FloorToInt(time % 60);
        _playTimeText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    private void SetSwitchCoolText() {
        int result = 0;
        int cooltime = Mathf.FloorToInt(_weapon.GetSwitchLeft());
        
        if(cooltime > 0) result = cooltime;
        _switchCoolText.text = result.ToString();
    }

    public void DrawSelectUI() {
        _skillSelectPanel.SetActive(true);
        List<Skill> candidates = _options.Where(x => Weapon.I.instSkills[x].ability.Lv < 5)
            .OrderBy(x => Random.value).Take(3).ToList();

        int count = candidates.Count;
        for(int i = 0; i < count; ++i) {
            Skill skill = candidates[i];
            int skillLevel = Weapon.I.instSkills[skill].ability.Lv;
            // 오브젝트 생성 후 부착하는 식으로 수정
            GameObject inst = Instantiate(cardPrefs[skill][skillLevel]);
            GameObject card = new GameObject("Card"+i);
            inst.transform.SetParent(_skillSelectPanel.transform, false);
            inst.transform.SetAsLastSibling();
            inst.GetComponent<Button>().onClick.AddListener(() => OnSkillSelect(skill));

            Vector2 pos = Vector2.zero;
            if(count == 3) {
                pos = new Vector2((i - 1) * _spacing, 0f);
            }else if(count == 2) {
                pos = new Vector2((i == 0 ? -1 : 1) * _spacing / 2f, 0f);
            }

            inst.GetComponent<RectTransform>().anchoredPosition = pos;
            _instCards.Add(inst);
        }
    }

    public void OnSkillSelect(Skill skill) {
        if(Weapon.I.instSkills[skill].ability.Lv == 0) {
            GameObject imgObject = new GameObject("Icon");

            RectTransform rt = imgObject.AddComponent<RectTransform>();
            rt.sizeDelta = new Vector2(150f, 150f);

            Image imgComp = imgObject.AddComponent<Image>();

            Sprite sprite = Sprite.Create(
                _iconList[skill], 
                new Rect(0, 0, _iconList[skill].width, _iconList[skill].height), 
                new Vector2(0.5f, 0.5f)
                );
            imgComp.sprite = sprite;

            imgObject.transform.SetParent(_skilBoxList[_iconNum].transform);
            imgObject.transform.SetAsLastSibling();

            _iconNum++;
        }

        foreach(var card in _instCards) {
            Destroy(card);
        }
        _instCards.Clear();

        GM.I.OnSkillSelect(skill);
        _skillSelectPanel.SetActive(false);
    }

    public void OnResume() {
        _pausePanel.SetActive(false);
    }

    public void DrawNexusHitUI() {

    }

    public void DrawPauseUI() {
        _pausePanel.SetActive(true);
    }

    public void DrawGameOverUI() {
        _gameOverPanel.SetActive(true);
        _killResultText.text = _killCountText.text;
        _timeResultText.text = _playTimeText.text;
    }

    public void SetKillCountText(int value) {
        _killCountText.text = value.ToString();
    }

    public void LoadLobbyScene() {
        SceneManager.LoadScene("Lobby");
    }
}