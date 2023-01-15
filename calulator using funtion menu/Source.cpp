#include<iostream>
#include<conio.h>
using namespace std;
void menu();
float add(float, float);
float div1(float, float);
float sub(float, float);
float mul(float, float);
int mod(int, int);
int main()
{
	const int
		INPUT = 1,
		ADD = 2,
		SUB = 3,
		MUL = 4,
		DIV = 5,
		MOD = 6,
		QUIT= 7;

	int choice;
	float num1 , num2 ;
	

	//starting 
	do {
		menu();
		cin >> choice;
		while (choice<INPUT || choice>QUIT)
		{
	    	cout << "Invalid Enter again :";
			
			cin >> choice;
		}
		{
			
			switch (choice)
			{
			case(INPUT):
			{
				cout << "Enter number 1 : ";
				cin >> num1;
				cout << "Enter number 2 : ";
				cin >> num2;

			}
			break;

			case(ADD):
				cout << "Addition is ==> " << add(num1,num2) <<endl;
				break;
			case(SUB):
				cout << "Subtraction is ==> "<< sub(num1,num2);
				break;

			case(MUL):
				cout << "Multiplication is ==> " << mul(num1,num2);
				break;
			case(DIV):
				cout << "Divivison  is ==> " << div1(num1,num2);
			case(MOD):
				cout << "Mode is ==>" << mod(num1,num2);
				break;

			}

		}

	} while (choice != QUIT);




}



void menu()
{
	cout << "\n\n\t\t Mathematical Calulator \n"
		<< "1.FOR INPUT \n"
		<< "2.ADDITION\n"
		<< "3.SUBTRACTION\n"
		<< "4.MULTIPLICATION\n"
		<< "5.MODE\n"
		<< "6.QUIT\n"
		<< "ENTER YOUR CHOICE : ";
}
float add(float a, float b)
{
	float x;
	x = a + b;
	return x;
}
float sub(float a, float b)
{
	float x;
	x = a - b;
	return x;
}
float mul(float a, float b)
{
	float x;
	x = a * b;
	return x;
}
float div1(float a, float b)
{
	float x;
	x = a / b;
	return x;
}
int  mod(int a,int b)
{
	int x;
	x = a + b;
	return x;
}