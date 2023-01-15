#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

double sum(double, double);double x;
int main()
{
	double num1, num2;
	cout << "\n \t This program calulate sum of funtion \n ";

	cout << "Enter Number 1 : ";
	cin >> num1;
	cout << fixed << showpoint << setprecision(2);
	cout << "Entwe number 2 : ";
	cin >> num2;
	cout<<sum(num1, num2);
	

}
double sum(double arg1, double arg2)
{
	
	x = arg1 + arg2;
	cout << "sum of numbers is : ";
	return x;
}