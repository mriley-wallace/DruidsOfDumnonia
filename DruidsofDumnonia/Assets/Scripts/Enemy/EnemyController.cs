using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{

    public float lookRadius = 10.0f;

    public float attackRadius = 2.0f;

    Transform target;

    NavMeshAgent agent;

    public Animator enemyAnimator;

    public elementalSelect eSelect;

    public int damage;

    public HealthSystem healthSystem;

    void Start()
    {
        target = PlayerManager.instance.player.transform;
        agent = GetComponent<NavMeshAgent>();
        eSelect = FindObjectOfType<elementalSelect>();
        healthSystem = new HealthSystem(100);
    }

    // Update is called once per frame
    void Update()
    {
        float distance = Vector3.Distance(target.position, transform.position);

        if (distance <= lookRadius && distance >= attackRadius)
        {
            enemyAnimator.SetBool("isIdle", false);
            enemyAnimator.SetBool("isWalking", true);
            enemyAnimator.SetBool("isAttack", false);
            agent.SetDestination(target.position);



            if (distance <= agent.stoppingDistance)
            {
                FaceTarget();
                enemyAnimator.SetBool("isWalking", false);
            }
        }
        if (distance <= attackRadius)
            {
                enemyAnimator.SetBool("isAttack", true);
            }
        
        if(distance > lookRadius)
        {
            enemyAnimator.SetBool("isIdle", true);
        }


        if(healthSystem.GetHealth() == 0)
        {
            Destroy(this.gameObject);
           PlayerManager.instance.CollectEnemyDeath(1);
        }


    }

    void FaceTarget()
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5.0f);
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, lookRadius);
    }


    public void OnCollisionEnter(Collision collision)
    {
        damage = 0;

        if (collision.gameObject.CompareTag("Bullet"))
        {

            if (agent.CompareTag("AirEnemy") && eSelect.airPicked == true )
            {
                damage = 25;

            }
            else if (agent.CompareTag("AirEnemy") && eSelect.airPicked == false)
            {
                damage = 10;
            }

            if(agent.CompareTag("WaterEnemy") && eSelect.waterPicked == true)
            {
                damage = 25;
            }
            else if(agent.CompareTag("WaterEnemy") && eSelect.waterPicked == false)
            {
                damage = 10;
            }

            if(agent.CompareTag("FireEnemy") && eSelect.firePicked == true)
            {
                damage = 25;
            }
            else if(agent.CompareTag("FireEnemy") && eSelect.firePicked == false)
            {
                damage = 10;
            }

            if (agent.CompareTag("ThunderEnemy") && eSelect.thunderPicked == true)
            {
                damage = 25;
            }
            else if(agent.CompareTag("ThunderEnemy") && eSelect.thunderPicked == false)
            {
                damage = 10;
            }

        }

        healthSystem.Damage(damage);
        Debug.Log(healthSystem.GetHealth());
        Destroy(collision.gameObject);
    }
}
