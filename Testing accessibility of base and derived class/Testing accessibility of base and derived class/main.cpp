#include"Base.h"
#include"Derived.h"
#include<iostream>
using namespace std;
int main()
{
	Base baseObj(2,5,6);
	Derived derObj;
	//Derived1 der1Obj;
	//Derived2 der2Obj;

	baseObj.publicScore;
	derObj.pubDER;
	//der1Obj.publicScore;
	//der1Obj.protectedScore;//can't access them
	cout << "Publuic,protected,Private\n";
	cout<<baseObj.getPublic()<<endl;
	cout << baseObj.getProtected() << endl;
	cout << baseObj.getPtivte() << endl;
	cout << "Now i habe change protected and public in derived class through hard core\nAfter changes\n";
	cout << derObj.getBasePub()<<endl;
	cout << derObj.getBaseProtec()<<endl;
	//i cant change inherited data

	

}