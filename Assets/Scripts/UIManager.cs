using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.UI;
using AYellowpaper.SerializedCollections;
using TMPro;
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
    private GameObject _gameClearPanel;

    [SerializeField]
    private GameObject _directionArrow;

    [SerializeField]
    private GameObject _bossWarningAlert;

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
    private TextMeshProUGUI _killScoreText;

    [SerializeField]
    private TextMeshProUGUI _timeScoreText;

    [SerializeField]
    private GameObject _switchButton;

    [SerializeField]
    private AudioClip _buttonSound;

    [SerializeField]
    private AudioClip _levelUpSound;

    [SerializeField]
    private AudioClip _bossWarningSound;

    [SerializeField]
    private Animator _transAnimator;
    #endregion

    #region Reference

    private Weapon _weapon;

    private Nexus _nexus;

    private AudioSource _audioSource;

    private Image _arrowImage;

    private Image _childArrowImage;

    #endregion

    private List<Skill> _options;

    private List<GameObject> _instCards;

    private int _iconBoxIndex = 0;

    private bool _isBossSpawn = false;

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
        _arrowImage = _directionArrow.GetComponent<Image>();
        _childArrowImage = _directionArrow.transform.Find("Icon").GetComponent<Image>();
        _audioSource = GetComponent<AudioSource>();
        _skillSelectPanel.SetActive(false);
        _pausePanel.SetActive(false);
        _gameOverPanel.SetActive(false);

        StartCoroutine(SwitchStart()); // level 1 start
        Invoke(nameof(DrawTutorialPanel), 1.0f);
        Invoke(nameof(DrawBossSpawnAlert), 355f);
    }

    private void Update() {
        SetPlayTimeText();
        SetSwitchCoolText();
        SetSlider();
        SetLevelText();
        SetArrowVisible();
        SetKillCountText();
    }

    #region Set UI

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

    private void SetSlider() {
        float curExp = _weapon.ability.Exp;
        float maxExp = GM.I.LevelData[_weapon.ability.Lv].reqEXP;
        sliders[SliderType.WeaponEXP].value = curExp / maxExp;

        if(_isBossSpawn) {
            Boss boss = GameObject.Find("Boss")?.GetComponent<Boss>(); // 오브젝트 참조 방식 변경
            if(boss != null) {
                float curBossHP = boss.ability.HP;
                float maxBossHP = boss.ability.MaxHP;
                sliders[SliderType.BossHP].value = curBossHP / maxBossHP;
            }
        }

        float curNexusHP = _nexus.ability.HP;
        float curNexusMaxHP = _nexus.ability.MaxHP;

        sliders[SliderType.NexusHP].value = curNexusHP / curNexusMaxHP;
    }

    private void SetLevelText() {
        _levelText.text = string.Format("Lv {0}", _weapon.ability.Lv.ToString());
    }

    private void SetArrowVisible() {
        if(_nexus != null) {
            Vector3 viewportPos = Camera.main.WorldToViewportPoint(_nexus.transform.position);

            bool isVisible =
                viewportPos.z > 0f &&                       // 카메라 앞에 있으며
                viewportPos.x > 0f && viewportPos.x < 1f && // 화면 좌우 안에 있으며
                viewportPos.y > 0f && viewportPos.y < 1f;   // 화면 상하 안에 있음

            Color color = Color.white;
            color.a = isVisible ? 0f : 1f;

            _arrowImage.color = color;
            _childArrowImage.color = color;
        }
    }

    public void SetKillCountText() => _killCountText.text = GM.I.killCount.ToString();

    #endregion

    #region Draw UI

    public void DrawSelectPanel() {
        _audioSource.PlayOneShot(_levelUpSound); // 웨펀쪽으로 넘기기
        CreateCard();
        _skillSelectPanel.SetActive(true);
    }

    private void DrawPausePanel() => _pausePanel.SetActive(true);

    public void DrawGameOverPanel() {
        _gameOverPanel.SetActive(true);
        _killResultText.text = _killCountText.text;
        _timeResultText.text = _playTimeText.text;
    }

    public void DrawTutorialPanel() { 
        _tutorialPanel.SetActive(true);
        GM.I.PauseGame();
    } 

    public void DrawNexusHitUI() {}

    private void DrawBossSpawnAlert() {        
        StartCoroutine(BossWarningRoutine());
    }

    public void DrawClearPanel() {
        _gameClearPanel.SetActive(true);
        _killScoreText.text = _killCountText.text;
        _timeScoreText.text = _playTimeText.text;
    }

    #endregion

    #region Button interaction

    public void OnSwitchButton() => _weapon.SwitchingAction();

    public void OnPauseButton() {
        _audioSource.PlayOneShot(_buttonSound);
        DrawPausePanel(); 
        GM.I.PauseGame();
    }

    public void OnCardButton(Skill skill) { // skill list box
        _audioSource.PlayOneShot(_buttonSound);

        AddSkillList(skill);
        _weapon.SkillLevelUp(skill);

        foreach(var card in _instCards) { Destroy(card); }
        _instCards.Clear();

        _skillSelectPanel.SetActive(false);
        GM.I.ResumeGame();
    }

    public void OnResumeButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _pausePanel.SetActive(false);
        GM.I.ResumeGame();
    }

    public void OnQuitButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _pausePanel.SetActive(false);
        StartCoroutine(PlayFadeOut());
    }

    public void OnConfirmButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _gameOverPanel.SetActive(false);
        StartCoroutine(PlayFadeOut());
    }

    public void OnPlayButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _tutorialPanel.SetActive(false);
        GM.I.ResumeGame();
    }

    public void OnMainButton() {
        _audioSource.PlayOneShot(_buttonSound);
        _gameClearPanel.SetActive(false);
        StartCoroutine(PlayFadeOut());
    }

    #endregion

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

    private void CreateCard() {
        List<Skill> candidates = _options
            .Where(x => Weapon.I.instSkills[x].ability.Lv < 5)
            .OrderBy(x => Random.value).Take(3).ToList();

        int count = candidates.Count;

        Vector2[] offsets = null;
        if(count == 3) {
            offsets = new Vector2[] {
                new Vector2(50f, 970f),   // 왼쪽
                new Vector2(510f, 510f),  // 가운데
                new Vector2(970f, 50f)    // 오른쪽
            };
        } else if(count == 2) {
            offsets = new Vector2[] {
                new Vector2(200f, 820f),  // 왼쪽
                new Vector2(820f, 200f)   // 오른쪽
            };
        } else {
            offsets = new Vector2[] {
                new Vector2(510f, 510f)   // 가운데
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
            buttonComp.onClick.AddListener(() => OnCardButton(skill));

            card.transform.SetParent(_skillSelectPanel.transform, false); // priority
            card.transform.SetAsLastSibling();
            card.transform.localScale = Vector3.one;

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

    private IEnumerator SwitchStart() {
        yield return null;
        GameObject imgObject = new GameObject("Icon");

        RectTransform rt = imgObject.AddComponent<RectTransform>();
        rt.sizeDelta = new Vector2(150f, 150f);

        Image imgComp = imgObject.AddComponent<Image>();
        imgComp.sprite = _iconList[Skill.Switching];

        imgObject.transform.SetParent(_skilBoxList[_iconBoxIndex].transform);
        imgObject.transform.SetAsLastSibling();
        imgObject.transform.localPosition = Vector3.zero;
        imgObject.transform.localScale = Vector3.one;

        _iconBoxIndex++;
    }

    private IEnumerator PlayFadeOut() {
        GM.I.ResumeGame();
        _transAnimator.SetTrigger("FadeOut");
        yield return new WaitForSeconds(1f);
        GM.I.LoadLobby();
    }

    private IEnumerator BossWarningRoutine() {
        _audioSource.PlayOneShot(_bossWarningSound);
        _bossWarningAlert.SetActive(true);

        Image img = _bossWarningAlert.GetComponent<Image>();
        Color color = img.color;

        float totalDuration = 3f;
        float elapsed = 0f;
        float fadeCycleDuration = 1f;

        while(elapsed < totalDuration) {
            float cycleTime = elapsed % fadeCycleDuration;
            float alpha = Mathf.PingPong(cycleTime * 2f, 1f);

            color.a = alpha;
            img.color = color;

            elapsed += Time.deltaTime;
            yield return null;
        }

        color.a = 0f;
        img.color = color;
        _bossWarningAlert.SetActive(false);
    }

    public void SetBossSpawnBool(bool value) => _isBossSpawn = value;

}