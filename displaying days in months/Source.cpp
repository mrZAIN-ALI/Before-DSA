#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	const int month = 12;
	int days[month] = { 31,28,30,31,30,31,30,31,30,31,30,31 };
	cout<<"This program display no of days in month\n";
	cout << setw(20) << setfill('*');
	cout <<  " "<<endl;
	
	for (int count = 0; count < month; count++)
	{
		cout << "month " << count + 1 << " has " << days[count] << " days \n";
	}
	return 0;
}