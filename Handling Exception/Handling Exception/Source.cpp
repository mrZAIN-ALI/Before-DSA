#include<iostream>
#include<string>
using namespace std;
double divide(int, int);

int main()
{
	int numer, denom; double rem;
	cout << "Enter Numerator: ";
	cin >> numer;
	cout << "Enter Denomerator: ";
	cin >> denom;

	try
	{
		rem=divide(numer, denom);
		cout << "Quotient is : " << rem<<endl;
	}
	catch (string s)
	{
		cout << s;
	}

	return 0;
}
double divide(int numerator, int denomirator)
{
	if (denomirator == 0)
	{
		string exception;
		exception = "Can't divide by zero\n";
		throw exception;

	}

	return (static_cast<double>(numerator)) / denomirator;
}