#include<iostream>
#include<cstring>
#include<cctype>
#include"contactInfo.h"
using namespace std;
int main()
{
	//ContactInfo p1;

	char name[10], cont[10];
	cout << "Enter Name of Person : ";
	cin >> name;
	cin.ignore(NULL);
	cout << "Enter contact of person : ";
	cin >> cont;

	ContactInfo p1(name, cont);

	p1.print();
	
	return 0;
}