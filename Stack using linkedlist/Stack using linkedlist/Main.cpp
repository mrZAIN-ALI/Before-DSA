#include"DynIntStack.h"
#include<iostream>
using namespace std;
int main()
{
    int num;
    int exit=0;
    int counter= 1;
    DynIntStack list;
    do
    {

        cout<<"Enter integer > ";
        cin>>num;
        list.push(num);
        counter++;

        cout<<"To Exit Enter 1122\n";
    } while (num!=(1122));
    for (int i = 0; i < counter-1; i++)
    {
        list.pop(num);
        if(!list.is_Empty())
        cout<<"POPING "<<num<<endl;
    }
    
    return 0;
}