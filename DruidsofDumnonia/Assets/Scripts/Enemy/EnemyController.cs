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

  

    void Start()
    {
        target = PlayerManager.instance.player.transform;
        agent = GetComponent<NavMeshAgent>();
        HealthSystem healthSystem = new HealthSystem(100);
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

}
