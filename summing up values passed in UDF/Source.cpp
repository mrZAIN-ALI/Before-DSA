#include<iostream>
#include<conio.h>
using namespace std;
float sumVal(float, float, float);
int main()
{
	float val1 = 0, val2 = 0, val3 = 0;
	cout << "Enter any three numbers and i will sum them :";
	cin >> val1 >> val2 >> val3;
	sumVal(val1, val2, val3);
	_getch();
	
}
float sumVal(float num1, float num2, float num3)
{
	cout<< "Sum is: " << (num1 + num2 + num3) << endl;
	return 0;
}