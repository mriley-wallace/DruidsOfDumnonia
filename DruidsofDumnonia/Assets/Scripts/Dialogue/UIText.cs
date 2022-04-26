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
        textWriter.AddWriter(messageText, "Hello World", .1f, true);
    }

}
