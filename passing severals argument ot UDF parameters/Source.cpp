#include<iostream>
#include<conio.h>
using namespace std;
void displayValue(int);
int main()
{
	cout << "i am passing different values to variable \n";
	displayValue(5);
	
}
void displayValue(int num)
{
	cout << "number you have entered is : " << num << endl;
}