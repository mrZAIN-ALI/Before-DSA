#include<iostream>
#include<conio.h>
using namespace std;

void deeper()
{
	cout << "Hi im from deeper \n";

}
void deep()
{
	cout << "Hi im from deep now i am going to call deeper in deep \n";
	deeper();
	cout << "Now back to deep \n";
}
int main()
{
	cout << "Welcome to main\n";
	deeper();
	deep();
	cout << "Back to main \n";
	_getch();
}