#include<iostream>
using namespace std;
template <class T>
void swaP(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;

}

template<class t>
void showTwoVariable(t* a, t* b)
{
	cout << *a << " " << *b << endl;
}

int main()
{
	int firstInt, secondInt;
	double firstDouble, secondDouble;
	char firstChar, secondChar;

	cout << "Enter two Char : \n";
	cin >> firstChar >> secondChar;
	cout << "Before Swap\n";
	showTwoVariable(&firstChar, &secondChar);
	swaP(firstChar, secondChar);
	cout << "After Swap\n";
	showTwoVariable(&firstChar, &secondChar);

	cout << "Enter two integers : \n";
	cin >> firstInt >> secondInt;
	cout << "Before swap\n";
	showTwoVariable(&firstInt, &secondInt);
	swaP(firstInt, secondInt);
	cout << "After Swap\n";
	showTwoVariable(&firstInt, &secondInt);

	cout << "Enter two floating point numbers : \n";
	cin >> firstDouble >> secondDouble;
	cout << "Before swap\n";
	showTwoVariable(&firstDouble, &secondDouble);
	swaP(firstDouble, secondDouble);
	cout << "After Swap\n";
	showTwoVariable(&firstDouble, &secondDouble);

	return 0;
}
