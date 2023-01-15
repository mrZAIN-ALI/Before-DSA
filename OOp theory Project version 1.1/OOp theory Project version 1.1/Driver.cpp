#include"Account.h"
#include"product.h"
#include"Electronics.h"
#include"Grocery.h"
#include"SignUp.h"
#include"Admin.h"
#include"User.h"
#include"SignIn.h"
#include<iostream>
#include<iomanip>
using namespace std; 
void home();
int main()
{
	//Product* productPtr[2] = { new Electronics , new Grocery };
	home();
	return 0;
}
void home()
{
	char choice;
	cout << "Welcome to Walmart \n";
	cout << "Enter 'A' to create account B to sign in";
	cin >> choice;
	if (choice == 'A')
	{
		SignUp s1;
		s1.create_Account();

	}
	else if (choice == 'B')
	{
		SignIn s_In;
		s_In.log_In();
	}
}