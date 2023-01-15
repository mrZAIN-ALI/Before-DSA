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

	const FeetInches operator ++()
	{
		//We can't use any operator after this pointer
		//We have to use member variable
		++ feet;
		++inches;
		return *this;
		
	}
	const FeetInches operator --()
	{
		//We can't use any operator after this pointer
		//We have to use member variable
		--feet;
		--inches;
		return *this;

	}

	FeetInches(int a=0, int b=0)
	{
		feet = a;
		inches = b;
	}
};
int main()
{
	FeetInches d1(4,6);
	FeetInches d2;

	cout << "This is before Pre increment ++\n";
	cout <<"Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;
	++d1;
	cout << "This is After Pre increment ++\n";
	cout << "Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;

	cout << "This is before Pre decrement --\n";
	cout << "Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;
	--d1;
	cout << "This is After Pre decrement --\n";
	cout << "Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;

	cout << "We can also use this notation d2=++d1; this is because i  have use this pointer\n";
		cout << "This is before Pre increment ++\n";
	cout << "Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;
	d2 = ++d1;
	cout << "This is After  Pre increment++\n";
	cout << "Feet :" << d1.getFeet() << endl;
	cout << "Inches :" << d1.getInches() << endl;
	return 0;
}