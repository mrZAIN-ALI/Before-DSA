#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int > intList;

    for (int i = 0; i < 10; i++)
    {
        intList.push_back(i*10);
    }
    list<int>::iterator iter;

    for(iter=intList.begin();iter!=intList.end();iter++)
    {
        cout<<*iter<<"->";
    }
    cout<<endl;

    intList.reverse();

    for(iter=intList.begin();iter!=intList.end();iter++)
    {
        cout<<*iter<<"->";
    }
    cout<<endl;
}