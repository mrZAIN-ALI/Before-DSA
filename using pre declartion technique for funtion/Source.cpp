#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int main()
{
	cout << "This is from main funtion \n";
	fun();
	cout << "Return to main Funtion\n";
	_getch();
	return 0;
}
void fun()
{
	cout << "This is funtion 1 \n";

}