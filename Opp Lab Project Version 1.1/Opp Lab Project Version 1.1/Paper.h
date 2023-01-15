#ifndef PAPER_H
#define PAPER_H
#include"Tool.h"

class Paper:public Tool
{
protected:
    bool tie=false;
public:
    Paper(int);
    Paper();
    virtual bool fight(Tool &);
};
#endif