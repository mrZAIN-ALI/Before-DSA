#include"ArrayBasedQueue.h"
#include<iostream>
using namespace std;
void menu();
int main()
{
    int choice = 0,val=0;
    Queue q;
    do
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case(1):
        {
            cout << "Enter Integer :";
            cin >> val;
            if (q.isFull())
            {
                cout << "queue is FUll Try again\n";
                break;
            }
            else
            {
                q.enqueue(val);
            }
            
            break;
        }
        case(2):
        {
           
           
            if (q.isEmpty())
            {
                cout << "queue is Empty Try again\n";
                break;
            }
            else
            {
                q.dequeu();
            }

            break;
        }
        case(3):
        {
            
            if (q.isEmpty())
            {
                cout << "queue is Empty Try again\n";
                break;
            }
            else
            {
                q.display();
            }

            break;
        }
        case(4):
        {
            cout << "Enter Size in Integer :";
            cin >> val;
            if (val<0)
            {
                cout << "Try again Garbage IN \n";
                break;
            }
            else
            {
                q.set_Max_size(val);
            }

            break;
        }
        case(5):
        {
            ;
            if (q.isFull())
            {
                cout << "queue is FUll\n";
                
            }
            else
            {
                cout << "queu is Not Full\n";
            }

            break;
        }
        case(6):
        {
            ;
            if (q.isEmpty())
            {
                cout << "queue is Empty\n";

            }
            else
            {
                cout << "queu is Not Empty\n";
            }

            break;
        }
        }
    } while (choice!= 7);
    
    return 0;
}
void menu()
{
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++\n"
        "This is Array Based queue\n"
        "\n\nNOTE:Default Size Of Queue is 5 you can Change it \n\n"
        "1.To Enqueu an Element\n"
        "2.To Dequeue an Element\n"
        "3.To Display Queue \n"
        "4.To CHange Size of Queu\n"
        "5.TO Check is Queue  Full\n"
        "6.TO Check is Queue  Empty\n"
        "7.TO Exit\n"
        "+++++++++++++++++++++++++++++++++++++++++++++++++\n";

}