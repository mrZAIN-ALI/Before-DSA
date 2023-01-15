#include <iostream>
#include<conio.h>
#include"DoublyLinkedList.h"
using namespace std;
char menu();
int main()
{
    Doubly_Linked_List list;
    char choice;
    double value;
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    cout << "Default List is : \n";
    // list.display();

    do
    {
        list.display();
        choice = menu();

        switch (choice)
        {
        case ('1'):
        {
            cout << "Enter Value : ";
            cin >> value;
            list.insert(value);
            break;
        }
        case ('2'):
        {
            double target;
            cout << "Enter Specific Value to isert New Value before it: ";
            cin >> target;
            cout << "Enter Value : ";
            cin >> value;
            list.inset_Before_Given_val(target, value);
            break;
        }
        case ('3'):
        {
            cout << "Enter Value/Element to Delete : ";
            cin >> value;
            list.delete_(value);
            break;
        }
        case ('4'):
        {

            list.reverseDisplay();
            break;
        }

        }
    } while (choice != '5');
    return 0;
}
char menu()
{
    char choice = 0;

    cout << "\n\nSelect One of The following \n"
        "1) To Insert Element in the list\n"
        "2) T0 Inset Element before a specific val\n"
        "3) To Delete Element\n"
        "4) FOr reverse Display\n"
        "5) TO Exit\n >>";
    
    choice=_getch();
    while (choice < '1' || choice > '6')
    {
        cout << "Invalid Choice ! >> ";
        cin >> choice;
    }

    return choice;
}