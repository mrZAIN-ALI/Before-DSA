#include"ClinkedList.h"
#include<iostream>
using namespace std;
int main()
{
    ClinkedList clist;
    clist.add(11);
    clist.add(12);
    clist.add(13);

    clist.display();
    
    clist.advance();
    clist.display();

    clist.remove();
    clist.display();

    return 0;
}