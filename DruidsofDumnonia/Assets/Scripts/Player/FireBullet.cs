using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireBullet : MonoBehaviour
{
    public EHand m_Hand;


    public GameObject Player;
    public GameObject m_Bullet;

    public float m_Speed;

    bool bSpawnBullet = false;

    bool bGunActive = false;

    public elementalSelect eselected;

    float destroyAfterTime = 3.0f;


    public void Shoot()
    {
        bSpawnBullet = true;
    }

    public void StartGun()
    {
        bGunActive = true;
    }

    public void EndGun()
    {
        bGunActive = false;
    }

    void Update()
    {
        DetectionManager.DetectionHand detectHand = DetectionManager.Get().GetHand(m_Hand);
  

        if ( detectHand.IsSet() )
        {
            if( bSpawnBullet && bGunActive )
            {
                bSpawnBullet = false;

                Vector3 dir = detectHand.GetDirectionToFingers();
                //Vector3 dir = new Vector3(detectHand.GetDirectionToFingers().x, detectHand.GetDirectionToFingers().y, -Player.transform.position.z);
                Debug.Log(detectHand.GetDirectionToFingers());
                dir.Normalize();
                Vector3 startPos = detectHand.GetFinger(EFinger.eIndex).GetTipPosition();

                GameObject obj = Instantiate(m_Bullet, startPos, m_Bullet.transform.rotation);
                obj.GetComponent<Rigidbody>().velocity = dir * m_Speed;

                Destroy(obj, destroyAfterTime);

            }
        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        
    }
}
