using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class elementalSelect : MonoBehaviour
{
    public GameObject button;
 
    public void whenSelected()
    {

        switch (button.tag.ToString())
        {
            case "Water":
                
                Debug.Log("Water was selected");
                break;

            case "Air":

                Debug.Log("Air was selected");
                break;

            case "Fire":

                Debug.Log("Fire was selected");
                break;

            case "Thunder":

                Debug.Log("Thunder was selected");
                break;



        }

    }
}
