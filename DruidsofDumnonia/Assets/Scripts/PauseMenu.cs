using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public GameObject ResumeButton;
    public GameObject MainButton;
    public bool isPaused;
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (isPaused)
            {
                isPaused = false;
                ResumeButton.SetActive(false);
                MainButton.SetActive(false);
                Time.timeScale = 1f;
                
            }
            else
            {
                isPaused = true;
                ResumeButton.SetActive(true);
                MainButton.SetActive(true);
                Time.timeScale = 0f;
                
            }
        }
    }

    public void ResumeGame()
    {
        isPaused = false;
        ResumeButton.SetActive(false);
        MainButton.SetActive(false);
        Time.timeScale = 1f;

    }

    public void ReturnToMain()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);
    }
}
