using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProgressButton : MonoBehaviour
{
    public PlayerManager enemy = new PlayerManager();
    public GameObject FireStart;
    public GameObject ThunderStart;
    public GameObject AirStart;
    public GameObject FightStart;

    public void TeleportPlayer()
    {
        if (enemy.WaterDead == true)
        {
            GameObject.FindGameObjectWithTag("Player").transform.position = AirStart.transform.position;
        }

        if(enemy.AirDead == true && enemy.WaterDead == true)
        {
            GameObject.FindGameObjectWithTag("Player").transform.position = ThunderStart.transform.position;
        }

        if (enemy.ThunderDead == true && enemy.AirDead == true && enemy.WaterDead == true)
        {
            GameObject.FindGameObjectWithTag("Player").transform.position = FireStart.transform.position;
        }

        if (enemy.FireDead == true && enemy.ThunderDead == true && enemy.AirDead == true && enemy.WaterDead == true)
        {
            GameObject.FindGameObjectWithTag("Player").transform.position = FightStart.transform.position;
        }

        this.gameObject.SetActive(false);
    }





}
