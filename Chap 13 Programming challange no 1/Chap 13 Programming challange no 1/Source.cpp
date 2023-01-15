#include<iostream>
#include"date.h"
using namespace std;
int main()
{
	Date calander;
	int temp;
	cout << "Enter Day for calander : ";
	cin >> temp;
	calander.setDay(temp);

	cout << "Enter Month for calender : ";
	cin >> temp;
	calander.setMonth(temp);

	cout << "Enter Year For calander : ";
	cin >> temp;
	calander.setYear(temp);

	calander.printDate();

	return 0;

}