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

    private void Awake()
    {
        instance = this;
    }

    public GameObject player;

    private void Start()
    {
        HealthSystem healthSystem = new HealthSystem(100);
    }


}
