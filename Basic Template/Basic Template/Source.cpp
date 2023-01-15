#include<iostream>
using namespace std;
template <class T>
T square(T number);
int main()
{
	int intNumber=0;
	double doubleNUmber=0.0;

	cout << "Enter Integer Number : ";
	cin >> intNumber;
	cout << "Square is : " << square(intNumber)<<endl;
	cout << "Enter double Number : ";

	cin >> doubleNUmber;
	cout << "square is : " << square(doubleNUmber) << endl;

	return 0;
}
template <class T>
T square(T number)
{
	return (number * number);
}