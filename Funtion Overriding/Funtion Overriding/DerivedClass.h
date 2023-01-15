#include"BaseClass.h"
#include<iostream>
using namespace std;
#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
class DerivedClass :public BaseClass
{
public:
	void print()
	{
		cout << "i am child print\n";
	}
	void derivedFuntion()
	{
		cout << "I am from Derive Claas Extra Function\n";
	}
};
#endif // !DERIVEDCLASS_H
