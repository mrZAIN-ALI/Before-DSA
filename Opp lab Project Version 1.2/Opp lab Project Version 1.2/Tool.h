#ifndef TOOL_H
#define TOOL_H
using namespace std;
class Tool
{
    //Private Members
    int strength;
    char type;
public:
    //Public Functions
    void setStrength(int);
    int getStrength() const;
    Tool();
    Tool(int);
    void setType(char);
    char getType() const;
    virtual bool fight(Tool &)=0;
    
};
#endif