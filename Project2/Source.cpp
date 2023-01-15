#include<iostream>
#include<conio.h>
using namespace std;

void display1()
{
	cout << "Hi i'm from funtion display1 \n";
	
}


int main()
{
	cout << "Hi i'm from main funtion \n";
	display1();
	cout << "Now i'm back to funtion main \n ";
	_getch();
	return 0;
	
}