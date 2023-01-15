#ifndef SCISSORS_H
#define SCISSORS_H
#include"Tool.h"
//Inheriting Scissors Class From Abstract Tool class
class Scissors:public Tool
{
 public:
    Scissors(int);
    Scissors();
    virtual bool fight(Tool &);
};
#endif