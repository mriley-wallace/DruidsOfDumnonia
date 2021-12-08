using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Leap.Interaction.Internal.InteractionEngineUtility;
using Leap.Unity.Attributes;
using Leap.Unity.RuntimeGizmos;
using Leap.Unity.Interaction;

public class UIbuttonScript : InteractionManager
{

    private InteractionButton interactor = null;



    public void StartPress(InteractionButton button)
    {
        interactor = button;
        Debug.Log("this button was pressed");
    }
    public void EndPress(InteractionButton button)
    {
        interactor = null;
        Debug.Log("This button was released");
    }
}
