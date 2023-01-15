#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arrayone[SIZE] = { 3,5,7,8,9 },counter = 0;
	int arraytwo[SIZE] = { 3,5,7,8,9 };
	cout << "Arrays are : \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrayone[i] <<"\t";
		cout << arraytwo[i] << endl;
	}

	bool flag = true;
	while (flag && counter < SIZE)
	{
		if (arrayone[counter] != arraytwo[counter])
			flag = false;
		counter++;
	}
	if (flag)
		cout << "Array are equal";
	else
		cout << "Array are not equal ";
	return 0;

}