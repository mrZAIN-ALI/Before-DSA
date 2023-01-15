#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int PAY_RATE = 50, MIN_HOUR = 5;
	double hours ,total ;

	cout << "How many hours did you work : ";
	cin >> hours; cout << endl;
	hours = hours < MIN_HOUR ? (hours) : (MIN_HOUR);
	total = hours * PAY_RATE;
	cout << fixed << setprecision(2) << setw(2) << showpoint;
	cout << "Your Total Bill is " << total << " $\n";
	return 0;

}