using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class elementalSelect : MonoBehaviour
{
    public GameObject[] button;
    public GameObject[] bullets;
    public FireBullet rightProjectile;
    public FireBullet leftProjectile;

    public bool waterPicked;
    public bool airPicked;
    public bool firePicked;
    public bool thunderPicked;

    public void whenSelected()
    {
        //switch (button)
        //{
        //    case [0]:

        //        Debug.Log("Water was selected");
        //        leftProjectile.m_Bullet = bullets[0];
        //        rightProjectile.m_Bullet = bullets[0];
        //        break;

        //    case :

        //        Debug.Log("Air was selected");
        //        leftProjectile.m_Bullet = bullets[1];
        //        rightProjectile.m_Bullet = bullets[1];

        //        break;

        //    case GameObject[]:

        //        Debug.Log("Fire was selected");
        //        leftProjectile.m_Bullet = bullets[2];
        //        rightProjectile.m_Bullet = bullets[2];
        //        break;

        //    case GameObject[]:

        //        Debug.Log("Thunder was selected");
        //        leftProjectile.m_Bullet = bullets[3];
        //        rightProjectile.m_Bullet = bullets[3];
        //        break;



        //}
    }
    public void WaterSelected()
        {
        waterPicked = true;
        airPicked = false;
        firePicked = false;
        thunderPicked = false;
        Debug.Log("Water was selected");
        rightProjectile.m_Bullet = bullets[0];
        leftProjectile.m_Bullet = bullets[0];
    }

    public void AirSelected()
    {
        waterPicked = false;
        airPicked = true;
        firePicked = false;
        thunderPicked = false;
        Debug.Log("Air was selected");
        rightProjectile.m_Bullet = bullets[1];
        leftProjectile.m_Bullet = bullets[1];
    }

    public void FireSelected()
        {
        waterPicked = false;
        airPicked = false;
        firePicked = true;
        thunderPicked = false;
        Debug.Log("Fire was selected");
        rightProjectile.m_Bullet = bullets[2];
        leftProjectile.m_Bullet = bullets[2];
    }

    public void ThunderSelected()
    {
        waterPicked = false;
        airPicked = false;
        firePicked = false;
        thunderPicked = true;
        Debug.Log("Thunder was selected");
        rightProjectile.m_Bullet = bullets[3];
        leftProjectile.m_Bullet = bullets[3];
    }

    


       

    
}
