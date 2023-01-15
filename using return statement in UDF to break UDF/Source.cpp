#include<iostream>
#include<iomanip>
using namespace std;
void division(double, double);
int main()
{
	double num1, num2;
	cout << "\n \t Enter two numbers for division\n";
	cout << "Enter number 1 : ";
	cin >> num1;
	cout << "ENter NUmbwr 2 : ";
	cin >> num2;
	cout << fixed << showpoint << setprecision(2);
	division(num1, num2);
	return 0;
}

void division(double arg1, double arg2)
{
	if (arg2 == 0)
	{		cout << "Sorry i cannot divide \n";
	return;
    }
	cout << "Division of two numers is :  ";
	cout << arg1 / arg2 << "\n";
	
}
