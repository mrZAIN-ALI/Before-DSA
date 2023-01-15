#include<iostream>
#include<conio.h>
using namespace std;
void displayValue(int num);
int main()
{
	cout << "i am passint value 5 to UDF \n";
	displayValue(6);
	cout << "NOW back to main ";
	return 0;
}
void displayValue(int num)
{
	cout << "Number You have entered is : " << num << endl;

}