#include"Tool.h"
//Mutators
void Tool::setStrength(int st)
{
    strength=st;
}
void Tool::setType(char typ)
{
    type=typ;
}

//Accessors
int Tool::getStrength() const
{
    return strength;
}
char Tool::getType() const
{
    return type;
}

//Default Constuctor
Tool::Tool()
{
    strength=0;
    type=' ';
}

//Patameterized Constructor
Tool::Tool(int s)
{
    setStrength(s);
}
