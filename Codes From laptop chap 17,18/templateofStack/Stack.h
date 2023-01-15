#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
template<class T>
class Stack
{
    T *stack_Array=nullptr;
    int Array_Size;
    int top;

    public:
    Stack(int);
    Stack(const Stack &);
    ~Stack(){delete []stack_Array;}
    void push(T);
    void pop(T&);
    bool is_Full();
    bool is_Empty();

};
template<class t>
Stack<t>::Stack(int size)
{
    Array_Size=size;
    stack_Array=new t[size];
    top=-1;
}
template<class t>
Stack<t>::Stack(const Stack &obj)
{
    if (obj.Array_Size>0)
    {
        
        stack_Array=new t[obj.Array_Size];
    }
    for (int i = 0; i < obj.Array_Size; i++)
    {
        stack_Array[i]=obj.stack_Array[i];
    }
    
    top=obj.top;
    
}
template<class t>
void Stack<t>::push(t val)
{
    if(is_Full())
    {
        cout<<"Stack is full\n";
    }
    else
    {
        top++;
        stack_Array[top]=val;
    }
}
template<class t>
void Stack<t>::pop(t &val)
{
    if(is_Empty())
    {
        cout<<"Stack is empty\n";
    }
    else
    {
        val=stack_Array[top];
        
        top--;
    }
}
template<class t>
bool Stack<t>::is_Full()
{
    bool status;
    if(top==Array_Size-1)
    {
        status=true;
    }
    else
    status=false;

    return status;
}
template<class t>
bool Stack<t>::is_Empty()
{
    bool status;
    if(top==-1)
    {
        status=true;
    }
    else
    status=false;

    return status;
}
#endif