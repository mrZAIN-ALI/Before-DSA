#include"NumberList.h"
#include<iostream>
using namespace std;
int menu();

int main()
{
	int choice = 0;
	double value=0.0;
	NumberList new_List;
	new_List.insertAtEnd(1);
	new_List.insertAtEnd(2);
	new_List.insertAtEnd(3);
	cout << "Here is Dafult Vlaue of Linked Lis\n";
	
	do
	{
		new_List.displayList();

		choice = menu();

		switch (choice)
		{
		case (1):
		{
			cout << "Enter Value : ";
			cin >> value;
			new_List.insetAtBegin(value);
			break;
		}
		case (2):
		{
			cout << "Enter Value : ";
			cin >> value;
			new_List.insertAtEnd(value);
			break;
		}
		case (3):
		{
			double newVal;
			cout << "Enter Old value to  Update : ";
			cin >> value;
			cout << "Enter New Value to Update :  ";
			cin >> newVal;
			new_List.updateValue(value, newVal);
			break;
		}
		case (4):
		{
			cout << "Enter Value TO search :";
			cin >> value;
			if (new_List.searach(value))
			{
				cout << "Value Exist " << endl;
			}
			else
			{
				cout << "Value does't exist\n";
			}
			break;

		}
		case (5):
		{
			double hintVal;
			cout << "Enter New Value To inset: ";
			cin >> value;
			cout << "Enter Value to inset New Value After it : ";
			cin >> hintVal;
			new_List.insetAfter(hintVal, value);
			break;
		}
		case(6):
		{
			new_List.sort_IN_Accending();
			cout << "List Sorted In Acending Order\n";
			break;
		}
		case(7):
		{
			new_List.sort_In_Decending();
			cout << "List Sorted In Decending Order\n";
			break;
		}
		}
		system("CLS");

	} while (choice != 8);
	return 0;
}

int menu()
{
	int choice = 0;

	cout << "\n\nSelect One of The following \n"
		"1) To Add value/Node at begining \n"
		"2) T0 Add value/Node at end\n"
		"3) To To Update Value\n"
		"4) To Search Value\n"
		"5) To Inset After Certain Value\n"
		"6) To  sort list in Accending Order \n"
		"7) To  sort list in Decending Order\n"
		"8) To Exit\n>>";
	cin >> choice;
	while (choice < 1 || choice>8)
	{
		cout << "Invalid Choice ! >> ";
		cin >> choice;
	}

	return choice;
}