using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class GameOver : MonoBehaviour
{
    
    public GameObject ReturnButton;
    public GameObject RestartButton;
    public HealthSystem health;
    public GameObject DeathCounter;
   

    public void Start()
    {
        health = PlayerManager.instance.healthSystem;
    }


    // Update is called once per frame
    public void Update()
    {
        if(health.GetHealth() == 0)
        {
            ReturnButton.SetActive(true);
            RestartButton.SetActive(true);
            DeathCounter.SetActive(false);


        }
        else
        {
            ReturnButton.SetActive(false);
            RestartButton.SetActive(false);
            DeathCounter.SetActive(true);
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(1);
        Time.timeScale = 1f;

    }

    public void ReturnToMain()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);

    }
}
