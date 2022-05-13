using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathPlay : MonoBehaviour
{
    public AudioSource deadPlay;

    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Untagged")
        {
            deadPlay.Play();
        }
    }
}
