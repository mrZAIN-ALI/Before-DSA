#include"Paper.h"
//Parameterized Constructor
Paper::Paper(int str):Tool(str)
{
    setType('p');
}
//Default Constructor
Paper::Paper():Tool()
{

}
//Defining virtual Funtion
bool Paper::fight(Tool &obj)
{
    float tempStrength=0.0;
    bool flag=false;
    if(obj.getType()=='r')
    {
        tempStrength=(float (getStrength() )*2);
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

    else if(obj.getType()=='s')
    {
        tempStrength=(float (getStrength())/2);
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
