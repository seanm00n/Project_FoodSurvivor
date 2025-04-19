using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.UI;
using AYellowpaper.SerializedCollections;
using TMPro;
using UnityEngine.SceneManagement;
using System.Collections;

public class UIManager : MonoBehaviour
{
    public static UIManager I { get; private set; }

    public SerializedDictionary<Skill, List<Texture2D>> cardImgs;

    public SerializedDictionary<Skill, Sprite> _iconList;

    public SerializedDictionary<SliderType, Slider> sliders;

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
    private GameObject _tutorialPanel;
    
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

    [SerializeField]
    private TextMeshProUGUI _levelText;

    [SerializeField]
    private GameObject _switchButton;

    [SerializeField]
    private AudioClip _buttonSound;

    [SerializeField]
    private AudioClip _levelUpSound;

    #endregion

    private Weapon _weapon;

    private Nexus _nexus;

    private AudioSource _audioSource;

    private List<Skill> _options;

    private List<GameObject> _instCards;

    //private float _spacing = 600;

    private int _iconBoxIndex = 0;

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
        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>();
        _audioSource = GetComponent<AudioSource>();
        _skillSelectPanel.SetActive(false);
        _pausePanel.SetActive(false);
        _gameOverPanel.SetActive(false);

        StartCoroutine(SwitchStart()); // level 1 start
    }

    private void Update() {
        SetPlayTimeText();
        SetSwitchCoolText();
        SetSlider();
        SetLevelText();
    }

    private IEnumerator SwitchStart() {
        yield return null;
        AddSkillList(Skill.Switching);
    }

    private void SetLevelText() {
        _levelText.text = string.Format("Lv {0}", _weapon.ability.Lv.ToString());
    }

    private void SetSlider() {
        float curExp = _weapon.ability.Exp;
        float maxExp = GM.I.LevelData[_weapon.ability.Lv].reqEXP;
        sliders[SliderType.WeaponEXP].value = curExp / maxExp;

        //Boss go = GameObject.FindGameObjectWithTag("Boss")?.GetComponent<Boss>();
        //if(go != null) {
        //    float curBossHP = go.ability.HP;
        //    float maxBossHP = go.ability.MaxHP;
        //    sliders[SliderType.BossHP].value = curBossHP / maxBossHP;
        //}

        float curNexusHP = _nexus.ability.HP;
        float curNexusMaxHP = _nexus.ability.MaxHP;

        sliders[SliderType.NexusHP].value = curNexusHP / curNexusMaxHP;
    }

    private void SetPlayTimeText() {
        float time = Time.timeSinceLevelLoad;
        int minutes = Mathf.FloorToInt(time / 60);
        int seconds = Mathf.FloorToInt(time % 60);
        _playTimeText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    private void SetSwitchCoolText() {
        int cooltime = Mathf.FloorToInt(_weapon.GetSwitchLeft());

        if(cooltime > 0) {
            _switchCoolText.text = cooltime.ToString();
        } else {
            _switchCoolText.text = "";
        }
    }

    private void AddSkillList(Skill skill) {
        if(_weapon.instSkills[skill].ability.Lv == 0) {
            GameObject imgObject = new GameObject("Icon");

            RectTransform rt = imgObject.AddComponent<RectTransform>();
            rt.sizeDelta = new Vector2(150f, 150f);

            Image imgComp = imgObject.AddComponent<Image>();
            imgComp.sprite = _iconList[skill];

            imgObject.transform.SetParent(_skilBoxList[_iconBoxIndex].transform);
            imgObject.transform.SetAsLastSibling();
            imgObject.transform.localPosition = Vector3.zero;
            imgObject.transform.localScale = Vector3.one;

            _iconBoxIndex++;
        }
    }

    public void DrawSelectUI() {
        _audioSource.PlayOneShot(_levelUpSound);
        _skillSelectPanel.SetActive(true);
        List<Skill> candidates = _options.Where(x => Weapon.I.instSkills[x].ability.Lv < 5)
            .OrderBy(x => Random.value).Take(3).ToList();

        int count = candidates.Count;

        Vector2[] offsets = null;
        if(count == 3) {
            offsets = new Vector2[] {
                new Vector2(50f, 970f),   // 哭率
                new Vector2(510f, 510f),  // 啊款单
                new Vector2(970f, 50f)    // 坷弗率
            };
        } else if(count == 2) {
            offsets = new Vector2[] {
                new Vector2(200f, 820f),  // 哭率
                new Vector2(820f, 200f)   // 坷弗率
            };
        } else {
            offsets = new Vector2[] {
                new Vector2(510f, 510f)   // 啊款单
            };
        }

        for(int index = 0; index < count; ++index) {
            Skill skill = candidates[index];
            int skillLevel = Weapon.I.instSkills[skill].ability.Lv;
            
            GameObject card = new GameObject("Card" + index);

            Image imgComp = card.AddComponent<Image>(); // image
            Sprite sprite = Sprite.Create(
                cardImgs[skill][skillLevel],
                new Rect(0, 0, cardImgs[skill][skillLevel].width, cardImgs[skill][skillLevel].height),
                new Vector2(0.5f, 0.5f)
                );
            imgComp.sprite = sprite;

            Button buttonComp = card.AddComponent<Button>(); // button 
            buttonComp.onClick.AddListener(() => OnSkillSelect(skill));

            card.transform.SetParent(_skillSelectPanel.transform); // priority
            card.transform.SetAsLastSibling();

            RectTransform rectComp = card.GetComponent<RectTransform>(); // position
            rectComp.anchorMin = new Vector2(0f, 0.5f);
            rectComp.anchorMax = new Vector2(1f, 0.5f);
            rectComp.pivot = new Vector2(0.5f, 0.5f);
            rectComp.anchoredPosition = new Vector2(0f, -330f);
            rectComp.sizeDelta = new Vector2(0f, 980f);
            if(offsets != null && index < offsets.Length) { //
                rectComp.offsetMin = new Vector2(offsets[index].x, rectComp.offsetMin.y);
                rectComp.offsetMax = new Vector2(-offsets[index].y, rectComp.offsetMax.y);
            }

            _instCards.Add(card);
        }
    }

    public void OnSkillSelect(Skill skill) { // skill list box
        AddSkillList(skill);
        _audioSource.PlayOneShot(_buttonSound);
        foreach(var card in _instCards) {
            Destroy(card);
        }
        _instCards.Clear();

        GM.I.OnSkillSelect(skill);
        _skillSelectPanel.SetActive(false);
    }

    public void OnResumeButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _pausePanel.SetActive(false);
    }

    public void OnPlayButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _tutorialPanel.SetActive(false);
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

    public void DrawTutorial() {
        _tutorialPanel.SetActive(true);
    }

    public void SetKillCountText(int value) {
        _killCountText.text = value.ToString();
    }

    public void LoadLobbyScene() {
        _audioSource.PlayOneShot(_buttonSound);
        GM.I.OnPauseButton();
        SceneManager.LoadScene("Lobby");
    }
}