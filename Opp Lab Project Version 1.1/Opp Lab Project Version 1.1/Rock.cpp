#include"Rock.h"
Rock::Rock(int str):Tool(str)
{
    setType('r');
}
Rock::Rock():Tool()
{

}

bool Rock::fight(Tool &obj)
{
    int tempStrength=0;
    bool flag=false;
    if(obj.getType()=='s')
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

    if(obj.getType()=='p')
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
