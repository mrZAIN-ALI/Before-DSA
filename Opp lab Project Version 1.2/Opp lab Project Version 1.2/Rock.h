#ifndef POCK_H
#define POCK_H
#include"Tool.h"
//Inheriting Rock Class From Abstract Tool Class
class Rock:public Tool
{
public:
    Rock(int);
    Rock();
    virtual bool fight(Tool &);
};
#endif