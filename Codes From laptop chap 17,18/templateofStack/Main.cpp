#include"Stack.h"
#include<iostream>
using namespace std;
int main()
{
    int size;
    string str;
    cout<<"Enter Size of List > ";
    cin>>size;
    Stack<string> list(size);
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter string ";
        cin>>ws;
        getline(cin,str);
        list.push(str);
    }
    cout<<"NOw i am removieng values from stack\n";
    for (int i = 0; i < size; i++)
    {
        list.pop(str);
        cout<<"removing "<<str<<" \n";
    }
    
    
}