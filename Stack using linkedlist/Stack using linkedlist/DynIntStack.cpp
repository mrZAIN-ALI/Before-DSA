#include"DynIntStack.h"
#include<iostream>
using namespace std;
DynIntStack::~DynIntStack()
{
    Stack_Node* next_Node=nullptr;
    Stack_Node* traversing_Node=nullptr;

    traversing_Node=top;
    while (traversing_Node!=nullptr)
    {
        next_Node=traversing_Node->next_Node;
        delete traversing_Node;
        traversing_Node=next_Node;

    }
}
void DynIntStack::push(int val)
{
    Stack_Node *new_Node;
    new_Node=new Stack_Node;
    new_Node->value=val;

    Stack_Node *traversing_Node;
    if(is_Empty())
    {
        top=new_Node;
        new_Node->next_Node=nullptr;
    }
    else
    {
        new_Node->next_Node=top;
        top=new_Node;
    }
}
void DynIntStack::pop(int &val)
{
    Stack_Node *traversiong_Node=nullptr;
    if(is_Empty())
    {
        cout<<"Stack is Empty\n";
    }
    else
    {
        val=top->value;
        traversiong_Node=top->next_Node;
        delete top;
        top=traversiong_Node;
    }
}
bool DynIntStack::is_Empty()
{
    bool status;
    if(!top)
    {
        status=true;
    }
    else
    status=false;

    return status;
}