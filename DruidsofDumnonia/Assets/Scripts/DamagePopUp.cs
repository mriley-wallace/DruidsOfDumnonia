using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamagePopUp : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 1f);
       //transform.localPosition = new Vector3(0, 1, 1);
    }

 
}
