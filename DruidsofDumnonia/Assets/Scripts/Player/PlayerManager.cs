using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    public static PlayerManager instance;

    public bool WaterDead = false;
    public bool AirDead = false;
    public bool ThunderDead = false;
    public bool FireDead = false;
    public int TotalDeaths;

    public GameObject AirButton;
    public GameObject ThunderButton;
    public GameObject FireButton;

    public GameObject pButton;

    public HealthSystem healthSystem;

    public HealthBar healthbar;

    public GameObject player;

    private void Awake()
    {
        instance = this;
        
    }



    private void Start()
    {
       healthSystem = new HealthSystem(100);
    }

    public void Update()
    {

        healthbar.SetHealth(healthSystem.GetHealth());

        if(TotalDeaths == 3 && WaterDead == false)
        {
            WaterDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
            AirButton.SetActive(true);
        }
        if(TotalDeaths == 3 && WaterDead == true && AirDead == false)
        {
            AirDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
            ThunderButton.SetActive(true);
        }
        if(TotalDeaths == 3 && AirDead == true && ThunderDead == false)
        {
            ThunderDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
            FireButton.SetActive(true);
        }
        if(TotalDeaths ==3 && ThunderDead == true && FireDead == false)
        {
            FireDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
        }
        
   
    }

    public void CollectEnemyDeath(int deaths)
    {
        TotalDeaths += deaths;
    }
}
