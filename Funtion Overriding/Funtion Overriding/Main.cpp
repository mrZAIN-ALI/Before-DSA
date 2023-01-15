#include<iostream>
#include"DerivedClass.h"
using namespace std;
int main()
{
	DerivedClass d1;
	BaseClass b1;

	cout << "Now iam going to call sam funtion using base and child instances\n";
	b1.print();
	d1.print();
	cout << "Using 'd1.BaseClass::print();' this notation\n";
	d1.BaseClass::print();

	BaseClass *basePtr=nullptr;
	DerivedClass d2;
	basePtr = &d2;
	cout << "NOw i am going to use base class pointer to stores derived class address and then pringint the funtion\n";
	cout << "it will Contain Member funtion of base class\n";
	basePtr->print();

	cout << "Now i am going to use derived class pointer to call funtion of derived class\n";
	DerivedClass d3;
	DerivedClass* d4;
	d4 = &d3;
	d4->print();



}