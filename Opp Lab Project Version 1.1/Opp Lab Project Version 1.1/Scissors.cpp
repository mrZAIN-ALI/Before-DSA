#include"Scissors.h"
Scissors::Scissors(int str):Tool(str)
{
    setType('s');
}
Scissors::Scissors():Tool()
{

}

bool Scissors::fight(Tool &obj)
{
    int tempStrength=0;
    bool flag=false;
    if(obj.getType()=='p')
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

    if(obj.getType()=='r')
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
