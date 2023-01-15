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

	bool operator < (const FeetInches& rightobj)
	{
		bool flag;
		if (feet < rightobj.feet)
		{
			flag = true;
		}
		else if (feet == rightobj.feet && inches < rightobj.inches)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
			return flag;

	}

	bool operator > (const FeetInches& rightobj)
	{
		bool flag;
		
		if (feet > rightobj.feet)
		{
			flag = true;
		}
		else if (feet == rightobj.feet && inches > rightobj.inches)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
		return flag;

	}
	bool operator == (const FeetInches& rightobj)
	{
		bool flag;
		
		if (feet == rightobj.feet && inches == rightobj.inches)
			flag = true;
		
		else
			flag = false;
		return flag;

	}
	FeetInches(int a = 0, int b = 0)
	{
		feet = a;
		inches = b;
	}
};
int main()
{
	int feet = 0;
	int inches = 0;
	FeetInches d1;
	FeetInches d2;

	cout << "ENter Feet for object 1 : ";
	cin >> feet;
	d1.setFeet(feet);
	cout << "ENter Inches for object 1 : ";
	cin >> inches;
	d1.setInches(inches);

	cout << "ENter Feet for object 2 : ";
	cin >> feet;
	d2.setFeet(feet);
	cout << "ENter Inches for object 2 : ";
	cin >> inches;
	d2.setInches(inches);

	if (d1 > d2)
		cout << "Obj d1 is > obj d2 \n";
	else if (d1 < d2)
		cout << "obj d1 is < obj d2 \n";
	else if (d1 == d2)
		cout << " obj d1= obj d2\n";
	return 0;
}