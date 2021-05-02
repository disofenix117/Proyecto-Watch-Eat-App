using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlREs : MonoBehaviour
{
    public float aspect;
    public float rounded;
    UnityEngine.UI.CanvasScaler cv;
    // Start is called before the first frame update
    void Start()
    {
        cv=this.GetComponent <UnityEngine.UI.CanvasScaler>();
         UpdateResolution();
    }
    void UpdateResolution()
    {
        aspect=Camera.main.aspect;
        rounded=(int)(aspect*100.0f)/100.0f;
        if(rounded==1.65f||rounded==1.66||rounded==1.57f)
        Addratios(0,5.34f);
        else if(rounded==2.04f||rounded==2.05f||rounded==2.06f)
        Addratios(0.88f,4.86f);
        else if(rounded==1.70f||rounded==1.71f||rounded==1.69f)
        Addratios(0f,5.21f);
        else if(rounded==1.33f||rounded==1.32f||rounded==1.34f)
        Addratios(0,6.77f);
        else if(rounded==1.85f)
        Addratios(1,5f);
        else if(rounded==2.11f)
        Addratios(1,4.75f);
        else
        Addratios(0,5f);
    }
    void Addratios(float m, float sz)
    {
        if(cv!=null)
        cv.matchWidthOrHeight=m;
        Camera.main.orthographicSize=sz;
    }


    // Update is called once per frame
    void Update()
    {
       
        
    }
}
