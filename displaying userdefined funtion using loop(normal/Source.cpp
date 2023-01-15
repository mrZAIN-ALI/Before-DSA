#include<iostream>
#include<conio.h>
using namespace std;

int   display1()
{
	cout << "Hi i'm from funtion display1 \n";
	return 1111;
}
int main()
{
	cout << "HI i'm from main funtion \n";
	for (int i = 0; i < 5; i++)
	{
		display1();

	}
	cout << "Back to main funtion \n";
	_getch();
	return 0;
}