#include<iostream>
using namespace std;
int main()
{
	int number[5];
	cout << "Enter numbers : \n";
	//using range for loop
	for (int& newnum : number)
	{
		cout << "Enter an integer value : ";
		cin >> newnum;
		cout << endl;
	}
	cout << "Number you have entered are : \n";
	for (int newnum : number)
		cout << newnum << endl;
	return 0;
}
