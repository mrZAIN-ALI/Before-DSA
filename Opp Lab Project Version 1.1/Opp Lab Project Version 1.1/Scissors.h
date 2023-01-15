#ifndef SCISSORS_H
#define SCISSORS_H
#include"Tool.h"

class Scissors:public Tool
{
protected:
    bool tie=false;
public:
    Scissors(int);
    Scissors();
    virtual bool fight(Tool &);
};
#endif