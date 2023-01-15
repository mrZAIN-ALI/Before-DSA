#include"QueOfPerson.h"
#include<iostream>
using namespace std;
int main()
{
	QueOfPerson qu;
	qu.enQue("zain", 19);
	qu.enQue("ali", 26);
	qu.enQue("farjad", 19);


	qu.display();
	return 0;
}