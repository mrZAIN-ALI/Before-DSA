#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int SIZE = 7;
	string planets[SIZE] = { "mercuty","Venus","earth","Mars","Satrun","pluto (dwarf p;ammet )","jupiter" };
	cout << "Names of planets \n";
	for (int count = 0; count < SIZE; count++)
		cout << planets[count] << endl;
	return 0;
}