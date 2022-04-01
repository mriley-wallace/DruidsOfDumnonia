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

    


        //switch (button)
        //{
        //    case button[0]:
                
        //        Debug.Log("Water was selected");
        //        projectile.m_Bullet = bullets[0];
        //        break;

        //    case 1:

        //        Debug.Log("Air was selected");
        //        projectile.m_Bullet = bullets[1];

        //        break;

        //    case 2:

        //        Debug.Log("Fire was selected");
        //        projectile.m_Bullet = bullets[2];
        //        break;

        //    case 3:

        //        Debug.Log("Thunder was selected");
        //        projectile.m_Bullet = bullets[3];
        //        break;



        //}

    
}
