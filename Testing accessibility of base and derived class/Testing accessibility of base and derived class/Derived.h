#include"Base.h"
#ifndef DERIVED_H
#define DERIVED_H
#include<iostream>
using namespace std;
class Derived :public Base
{
	double privDER;
protected:
	double protDER;
public:
	double pubDER;
	double getPrivDER() { return privDER; }
	double getProDER() { return protDER; }
	double getPublDER() { return pubDER; }
	double getBaseProtec() { return protectedScore; }
	double getBasePub() { return publicScore; }

	//double DoubleFromBasePriv() { return privateScore; } //Can't Access Private directly in public mode
	 

	Derived()
	{
		cout << "Constructor of Derived\n";

	}
	~Derived()
	{
		cout << "Destructor of Derived\n";
	}
};
//class Derived1 :private Base
//{
//	double privDER;
//protected:
//	double protDER;
//public:
//	double pubDER;
//
//	double getPrivDER() { return privDER; }
//	double getProDER() { return protDER; }
//	double getPublDER() { return pubDER; }
//
//	//double DoubleFromBasePriv() { return privateScore; } 
//	double DoubleFromBaseProt() { return protectedScore; }
//	double DoubleFromBasePublic() { return publicScore; }
//
//};
//class Derived2 :protected Base
//{
//	double privDER;
//protected:
//	double protDER;
//public:
//	double pubDER;
//
//	double getPrivDER() { return privDER; }
//	double getProDER() { return protDER; }
//	double getPublDER() { return pubDER; }
//
//
//	//double DoubleFromBasePriv() { return privateScore; }
//	double DoubleFromBaseProt() { return protectedScore; }
//	double DoubleFromBasePublic() { return publicScore; }
//
//
//};
#endif