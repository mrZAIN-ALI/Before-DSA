#ifndef PAPER_H
#define PAPER_H
#include"Tool.h"
//Inhertiting Paper Classs From Abstract Toll class
class Paper:public Tool
{
public:
    Paper(int);
    Paper();
    virtual bool fight(Tool &);
};
#endif