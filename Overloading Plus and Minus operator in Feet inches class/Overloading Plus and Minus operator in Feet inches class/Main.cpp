#include"feet inchesh.h"
#include<iostream>
#include<iomanip>
using namespace std;
void showObjectState( FeetInches&);
int main()
{
	int feet=0;
	int inch = 0;
	cout << "Enter Feet : ";
	cin >> feet;
	cout << "Enter inches : ";
	cin >> inch;
	FeetInches lenth1(feet, inch);
	cout << "Enter Feet for lenth 2: ";
	cin >> feet;
	cout << "Enter inches for lenth 2: ";
	cin >> inch;
	FeetInches lenth2(feet, inch);
	cout << setfill('#') << setw(25) << "\n";
	showObjectState(lenth1);	 
	cout << setfill('#') << setw(25) << "\n";
	showObjectState(lenth2);	 
	cout << setfill('#') << setw(25) << "\n";
	cout << "Now i am going to add These two\n";
	FeetInches lenth3(0,0);		 
	FeetInches lenth4(0,0);
	lenth3 = lenth1 + lenth2;	
			 
	showObjectState(lenth3);	 
	cout << setfill('#') << setw(25) << "\n";
	cout << "Now i am going to sub them\n";
	lenth3 = lenth1 - lenth2;
	showObjectState(lenth3);
	cout << setfill('#') << setw(25) << "\n";
	return 0;

}

void showObjectState( FeetInches& obj)
{
	cout << "Feet of lenth is :" << obj.getFeet()<<endl;
	cout << "Inches of lenth is :" << obj.getInches() << endl;


}