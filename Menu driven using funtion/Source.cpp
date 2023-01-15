#include<iostream>
#include<iomanip>
using namespace std;
void showBill(int, float);
void menu();

int main()
{
	const int
		ADULT_CHOICE = 1,
		CHILD_CHOICE = 2,
		SENIOR_CHOICE = 3,
		QUIT_CHOICE = 4;
	const float //rate
		ADULT = 40,
		CHILD = 20,
		SENIOR = 30;
	int choice=0, months;
   do
   {
	menu();
	cin >> choice;
	while (choice<ADULT_CHOICE||choice>QUIT_CHOICE )
	{
		cout << "Enter valid number : ";
		cin >> choice;
	}
	   if(choice!=QUIT_CHOICE)
	   {  // Get the number of months.
	   cout << "For how many months? ";
	   cin >> months;
	   }

	   // Display the membership fees.
	   switch (choice)
	   {
	   case ADULT_CHOICE:
		   showBill(months, ADULT);
		   break;
	   case CHILD_CHOICE:
		   showBill(months, CHILD);
		   break;
	   case SENIOR_CHOICE:
		   showBill(months, SENIOR);
	   }
   } while (choice != QUIT_CHOICE);

	return 0;
}

    
void menu()
{
	cout << "\n\t\tMebmershio for citizen \n"
		 << "1. Standard Adult Membership\n"
		 << "2. Child Membership\n"
		 << "3. Senior Citizen Membership\n"
		 << "4. Quit the Program\n\n"
		 << "Enter your choice: ";
}
void showBill(int month, float choic)
{
	cout << "Your total is : " << choic * month << "$\n";
}
