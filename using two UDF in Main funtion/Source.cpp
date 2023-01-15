#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

void fun1()
{
	cout << "Hi iam from funtion 1 \n";

}
void fun2()
{
	 cout << "Hi i'm from funtion 2  \n";

}
int main()
{
	cout << "hi i'm from main funtion \n";
	fun1();
	fun2();
	cout << "Back to  main \n";
	
}