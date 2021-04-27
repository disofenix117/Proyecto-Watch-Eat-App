using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class timer : MonoBehaviour
{
        public float tiempo =0.0f;

        public void Update()
        {
            tiempo+=tiempo+1;
            if(tiempo>3000)
            {
                 SceneManager.LoadScene("Menu");

            }
        }
}
