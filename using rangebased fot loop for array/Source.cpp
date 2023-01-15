#include<iostream>
using namespace std;
int main()
{
	int number[] = { 1,3,5,7,4,70 };
	cout << "displaying values" <<endl;

	for (int newnum : number)
		cout << newnum << endl;
}