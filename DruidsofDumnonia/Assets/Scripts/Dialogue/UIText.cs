using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIText : MonoBehaviour
{

    [SerializeField] private TextWriter textWriter;
    private Text messageText;

    private void Awake()
    {
        messageText = transform.Find("DialogueText").GetComponent<Text>();
    }

    private void Start()
    {
        textWriter.AddWriter(messageText, "Lord, it is time to embue the Gods magic, and destroy these Romans. Here, use the power of úplyft (air) to kill these 3 invaders. ", .1f, true);
    }

}
