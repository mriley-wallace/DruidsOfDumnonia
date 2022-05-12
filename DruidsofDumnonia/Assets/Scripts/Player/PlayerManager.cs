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

    public GameObject pButton;
    private void Awake()
    {
        instance = this;
        
    }

    public GameObject player;

    private void Start()
    {
        HealthSystem healthSystem = new HealthSystem(100);
    }

    public void Update()
    {
        if(TotalDeaths >= 3)
        {
            WaterDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
        }
        if(TotalDeaths >= 3 && WaterDead == true)
        {
            AirDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
        }
        if(TotalDeaths >= 3 && AirDead == true)
        {
            ThunderDead = true;
            pButton.SetActive(true);
            TotalDeaths = 0;
        }
        if(TotalDeaths >=3 && ThunderDead == true)
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
