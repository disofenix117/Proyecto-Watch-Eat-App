using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class sceneManager : MonoBehaviour
{
   
    public void cargarScene(string scene)
    {
        print(scene);
        SceneManager.LoadScene(scene);

    
    }
}