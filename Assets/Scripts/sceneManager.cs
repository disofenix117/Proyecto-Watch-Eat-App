using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class sceneManager : MonoBehaviour
{
        public  GameObject panel;
        bool act;
void Start()
    {
        //panel=GameObject.Find("PanelAux");
        act=false;
        
        
    }
    public void Panelaux()
    {
        act=!act;
        print(act);
        
        if (act==false)
        {
            panel.SetActive(false);

        }
        else
        {

            panel.SetActive(true);
        }
     
        

    }
   
    public void cargarScene(string scene)
    {
        print(scene);
        
        SceneManager.LoadScene(scene);

    
    }
}