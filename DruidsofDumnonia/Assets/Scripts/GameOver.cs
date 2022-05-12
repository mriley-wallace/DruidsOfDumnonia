using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    public GameObject GameOverMenu;
    public HealthSystem health;


    // Update is called once per frame
    void Update()
    {
        if (health.GetHealth() <= 0)
        {
                GameOverMenu.SetActive(true);
                Cursor.lockState = CursorLockMode.Confined;    
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
