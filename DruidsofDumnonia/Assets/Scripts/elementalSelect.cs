using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class elementalSelect : MonoBehaviour
{
    public GameObject[] button;
    public GameObject[] bullets;
    public FireBullet rightProjectile;
    public FireBullet leftProjectile;
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
        Debug.Log("Water was selected");
        rightProjectile.m_Bullet = bullets[0];
        leftProjectile.m_Bullet = bullets[0];
    }

    public void AirSelected()
    {
        Debug.Log("Air was selected");
        rightProjectile.m_Bullet = bullets[1];
        leftProjectile.m_Bullet = bullets[1];
    }

    public void FireSelected()
        {

        Debug.Log("Fire was selected");
        rightProjectile.m_Bullet = bullets[2];
        leftProjectile.m_Bullet = bullets[2];
    }

    public void ThunderSelected()
    {

        Debug.Log("Thunder was selected");
        rightProjectile.m_Bullet = bullets[3];
        leftProjectile.m_Bullet = bullets[3];
    }

    


       

    
}
