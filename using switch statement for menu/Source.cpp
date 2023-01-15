#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
	
		const int ADULT_R = 40, SENIOR_R = 30, CHILD_R = 20;//RATE
		int choice, hours, total, month;
		const int
			ADULT = 1, SENIOR = 2, CHILD = 3, QUIT = 4;//CHOICE

		cout << "Membership Menu\n";
		cout << "CHOSE 1 THOROUGH 4" << endl;
		cout << " 1.ADUILT \n 2.SENIOR \n 3.CHILD \n 4.QUIT \t|";
		cin >> choice;
		cout << fixed, showpoint, setprecision(2);
		switch (choice)
		{
		case(ADULT):
			cout << "Enter number of Months";
			cin >> month;
			total = month * ADULT_R;
			cout << "your Total Bill is:" << total << " $ \n";
			break;

		case(QUIT):
			cout << "Exiting program\n";
			break;

		default:
			cout << "invalid Entery \n";
			break;


		}
		return 0;

	
}