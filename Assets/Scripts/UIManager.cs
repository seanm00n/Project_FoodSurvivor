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

public class UIManager : MonoBehaviour
{
    public static UIManager I { get; private set; }

    public SerializedDictionary<Skill, List<GameObject>> cardPrefs;

    [SerializeField]
    private GameObject _skillSelectPanel;

    private List<Skill> _options;

    private List<GameObject> _instCards;

    private float _spacing = 300f;

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        _options = Enum.GetValues(typeof(Skill)).Cast<Skill>().ToList();
        _instCards = new List<GameObject>();
    }

    public void DrawSelectUI() {
        List<Skill> candidates = _options.Where(x => Weapon.I.instSkills[x].ability.Lv < 5)
            .OrderBy(x => Random.value).Take(3).ToList();

        int count = candidates.Count;
        for(int i = 0; i < count; ++i) {
            Skill skill = candidates[i];
            int skillLevel = Weapon.I.instSkills[skill].ability.Lv;

            GameObject inst = Instantiate(cardPrefs[skill][skillLevel]);
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
        GM.I.OnSkillSelect(skill);
        foreach(var card in _instCards) {
            Destroy(card);
        }
        _instCards.Clear();
        _skillSelectPanel.SetActive(false);
    }

    public void DrawNexusHitUI() {

    }

    public void DrawGameOverUI() {

    }
}