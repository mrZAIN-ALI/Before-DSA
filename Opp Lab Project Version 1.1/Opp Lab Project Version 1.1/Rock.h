#ifndef POCK_H
#define POCK_H
#include"Tool.h"

class Rock:public Tool
{
protected:
    bool tie=false;
public:
    Rock(int);
    Rock();
    virtual bool fight(Tool &);
};
#endif