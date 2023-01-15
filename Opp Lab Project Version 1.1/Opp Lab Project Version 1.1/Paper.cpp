#include"Paper.h"
Paper::Paper(int str):Tool(str)
{
    setType('p');
}
Paper::Paper():Tool()
{

}

bool Paper::fight(Tool &obj)
{
    int tempStrength=0;
    bool flag=false;
    if(obj.getType()=='r')
    {
        tempStrength=((getStrength())*2);
        if(tempStrength>obj.getStrength())
        {
            flag=true;
            return flag;
        }
        else if(tempStrength<obj.getStrength())
        { 
            return flag;
        }
        else 
        {
            tie=true;
        }
    }

    if(obj.getType()=='s')
    {
        tempStrength=((getStrength())/2);
        if(tempStrength>obj.getStrength())
        {
            flag=true;
            return flag;
        }
        else if(tempStrength<obj.getStrength())
        { 
            return flag;
        }
        else 
        {
            tie=true;
        }
    }
    
 
}
