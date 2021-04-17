using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
   public float tiempo=300.0f;
   public void Update()
   {
       tiempo=tiempo-1;
       if(tiempo==0)
       {
           SceneManager.LoadScene("Menu");
       }
   }
}
