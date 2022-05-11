using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldScript : MonoBehaviour
{
    public GameObject Bullet;
    private Collider BulletCollider;
    public int ShieldHealth;

    public void Awake()
    {
        ShieldHealth = 100;
    }


    public void OnTriggerEnter(Collider other)
    {
        Bullet = GameObject.FindGameObjectWithTag("Bullet");
        BulletCollider = Bullet.GetComponent<Collider>();

        if (other == BulletCollider)
        {
            ShieldHealth -= 25;
            Destroy(Bullet);
        }

        if (ShieldHealth < 0)
        {
            ShieldHealth = 0;
        }

        if (ShieldHealth == 0)
        {
            Destroy(this.gameObject);
        }

        

        
    }
}
