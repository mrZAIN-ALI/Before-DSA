#include<iostream>
using namespace std;
class FeetInches
{
	int feet;
	int inches;
public:

	void setFeet(int a) { feet = a; }
	void setInches(int b) { inches = b; }

	int getFeet() { return feet; }
	int getInches() { return inches; }

	const FeetInches operator --(int)
	{
		FeetInches temp(feet, inches);
		
		
		feet--;
		inches--;

		return temp;

	}
	const FeetInches operator ++(int)
	{	
		FeetInches temp(feet, inches);
		feet++;
		inches++; 
		return temp;

	}

	FeetInches(int a = 0, int b = 0)
	{
		feet = a;
		inches = b;
	}
};
int main()
{

	FeetInches d1(4, 6);
	FeetInches d2;

	for (int i = 0; i < 12; i++)
	{
		cout << "This is before post increment ++\n";
		cout << "Feet :" << d1.getFeet() << endl;
		cout << "Inches :" << d1.getInches() << endl;
		d2 = d1++;
		cout << "This is After Post increment ++\n";
		cout << "Feet :" << d2.getFeet() << endl;
		cout << "Inches :" << d2.getInches() << endl;
	}
	cout << "\n\n\n\nNOw Working oon decreament\n";
	for (int i = 0; i < 12; i++)
	{
		cout << "This is before post DEcrement ++\n";
		cout << "Feet :" << d1.getFeet() << endl;
		cout << "Inches :" << d1.getInches() << endl;
		d2 = d1--;
		cout << "This is After Post Decrement ++\n";
		cout << "Feet :" << d2.getFeet() << endl;
		cout << "Inches :" << d2.getInches() << endl;
	}
	int a=5;

	return 0;
}