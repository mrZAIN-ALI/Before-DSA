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
        cout<<"To Exit Enter -1\n";

        cout<<"Enter integer > ";
        cin>>num;
        list.push(num);
        counter++;

    } while (exit!=(-1));
    for (int i = 0; i < counter; i++)
    {
        list.pop(num);
        cout<<"POPINH"<<num<<endl;
    }
    
    return 0;
}