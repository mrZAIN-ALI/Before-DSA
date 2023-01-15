#include"Scissors.h"
//Parametrized Consstructor
Scissors::Scissors(int str):Tool(str)
{
    setType('s');
}
//Default Constrictor
Scissors::Scissors():Tool()
{

}
//Defining Virtual Function
bool Scissors::fight(Tool &obj)
{
    float tempStrength=0;
    bool flag=false;
    if(obj.getType()=='p')
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

    else if(obj.getType()=='r')
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
