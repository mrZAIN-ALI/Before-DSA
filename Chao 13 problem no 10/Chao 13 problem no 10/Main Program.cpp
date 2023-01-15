#include"NumberArray.h"
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<cctype>
using namespace std;
int menu();
int main()
{
	char choice;
	int op = 0;
	int size=0,index=0;
	float temp=0.0;
	cout << "please Enter Size of array you want to Select ";
	
	cin >> size;
	while (size < 0)
	{
		cout << "Please Enter size greater than 0 :";
		cin >> size;
	}

	NumArray n1(size);
	do
	{
		op = menu();

		switch (op)
		{
		case(1):
		{
			cout << "Please give index at which you want to Enter value range is from 1 to " << size;
			cin >> index;
			
			cout << "Now please enter float value : ";
			cin >> temp;
			n1.storeNum(index, temp);

		}
		break;
		case(2):
		{
			cout << "Please Enter index from 1 to " << size;
			cin >> index;
			cout << "Here is value : " << n1.retriveNum(index);
		}
		break;
		case(3):
		{
			cout << "Here us highest value ";
			cout << n1.highVal();
		}
		break;
		case(4):
		{
			cout << "here us lowest value : " << n1.lowVal();
		}
		break;

		case(5):
		{
			cout << "here is average :" << n1.aver();
		}
		break;
		
		}

		cout << "\nDO you want to continue or not Y/N  :";
		cin >> choice;


	} while (choice!='n');
	return 0;


}
int menu()
{
	int op;
	cout << setw(50) << setfill('*') << "\n";

	cout << "Please select any option \n";
	cout << "1• Store a number in any element of the array\n"
		"2• Retrieve a number from any element of the array\n"
		"3• Return the highest value stored in the array\n"
		"4• Return the lowest value stored in the array\n"
		"5• Return the average of all the numbers stored in the array : ";

	cin >> op;
	while (op<0 || op>5 )
	{
		cout << "Please enter value between 1 and 5 : ";
		cin >> op;
	}
	cout << setw(50) << setfill('*') << "\n";

	system("cls");
	cout << "NOW loading\n";
	Sleep(100);
	for (int i = 0; i < 50; i++)
	{
		cout << '/';
		if (i == 10 || i == 20 || i == 30)
		{
			Sleep(50);
		}
	}
	cout << endl;


	return op;
}