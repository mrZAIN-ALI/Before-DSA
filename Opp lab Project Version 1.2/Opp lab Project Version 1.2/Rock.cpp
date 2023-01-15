#include"Rock.h"
//Parameterized Constructor
Rock::Rock(int str):Tool(str)
{
    setType('r');
}
//Default Cosntructor
Rock::Rock():Tool()
{

}
//Defining Virtual Function
bool Rock::fight(Tool &obj)
{
    float tempStrength=0.0;
    bool flag=false;
    if(obj.getType()=='s')
    {
        tempStrength=(float (getStrength())*2);
        if(tempStrength>obj.getStrength())
        {
            flag=true;
            return flag;
        }
        else if(tempStrength<obj.getStrength())
        { 
            return flag;
        }
       
    }

    else if(obj.getType()=='p')
    {
        tempStrength= (float (getStrength())/2)  ;
        if(tempStrength>obj.getStrength())
        {
            flag=true;
            return flag;
        }
        else if(tempStrength<obj.getStrength())
        { 
            return flag;
        }
       
    }
    

}
