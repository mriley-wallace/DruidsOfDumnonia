using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TextWriter : MonoBehaviour
{

    private List<TextWriterSingle> textWriterSingleList;

    private void Awake()
    {
        textWriterSingleList = new List<TextWriterSingle>();
    }
    public void AddWriter(Text uiText, string textToWrite, float timePerChar, bool invisibleChars)
    {
        textWriterSingleList.Add(new TextWriterSingle(uiText, textToWrite, timePerChar, invisibleChars));
    }

    private void Update()
    {
        for(int i = 0; i < textWriterSingleList.Count; i++)
        {
            bool destroyInstance = textWriterSingleList[i].Update();
            if (destroyInstance)
            {
                textWriterSingleList.RemoveAt(i);
                i--;
            }
        }
    }
}
    public class TextWriterSingle
    {
    private Text uiText;
    private string textToWrite;
    private float timePerChar;
    private float timer;
    private int characterIndex;
    private bool invisibleChars;
    public TextWriterSingle(Text uiText, string textToWrite, float timePerChar, bool invisibleChars)
    {
        this.uiText = uiText;
        this.textToWrite = textToWrite;
        this.timePerChar = timePerChar;
        characterIndex = 0;
    }
   

    public bool Update()
    {

        
            timer -= Time.deltaTime;
            while (timer <= 0f)
            {
                timer += timePerChar;
                characterIndex++;
                string text = textToWrite.Substring(0, characterIndex);
                if (invisibleChars)
                {
                    text += "<color=#00000000>" + textToWrite.Substring(characterIndex) + "</color>";
                }
                uiText.text = text;

                if (characterIndex >= textToWrite.Length)
                {
                    uiText = null;
                    return true;
                }
            }
        return false;
    }

}
