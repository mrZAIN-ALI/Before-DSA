#include"MilTime.h"
#include<iostream>
using namespace std;
int main()
{
	MilTime time1(1230, 55);
	cout << time1.get_Hour()<<endl;
	cout << time1.get_Minute();
	return 0;
}