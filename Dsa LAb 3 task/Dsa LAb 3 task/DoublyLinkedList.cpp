#include"DoublyLinkedList.h"
#include <iostream>
using namespace std;
Doubly_Linked_List::Doubly_Linked_List()
{
    head = nullptr;
    last = nullptr;
}
void
Doubly_Linked_List::display()
{
    cout << endl;
    Node* traversing_Node = head;
    if (!head)
    {
        cout << "NO value to Show\n";
    }
    else
    {
        while (traversing_Node)
        {
            cout << traversing_Node->data << " ";
            traversing_Node = traversing_Node->next_Node;
        }
        cout << endl;
    }
}
void Doubly_Linked_List::insert(double val)
{
    Node* new_Node = new Node(val);

    if (!head)
    {
        head = new_Node;
        last = new_Node;
    }
    else
    {
        last->next_Node = new_Node;
        new_Node->prev_Node = last;
        last = new_Node;
    }
}
void Doubly_Linked_List::insert_At_head(double val)
{
    Node* new_Node = new Node(val);
    if (!head)
    {
        head = new_Node;
        last = new_Node;
    }
    else
    {
        new_Node->next_Node = head;
        head->prev_Node = new_Node;
        head = new_Node;
        new_Node->prev_Node = nullptr;
    }
}
void Doubly_Linked_List::inset_Before_Given_val(double targetVal, double val)
{
    Node* new_Node = new Node(val),
        * traversing_Node = head,
        * target_Node = nullptr;
    while (traversing_Node)
    {
        if (traversing_Node->data != targetVal)
        {
            traversing_Node = traversing_Node->next_Node;
        }
        else
        {
            target_Node = traversing_Node->prev_Node;

            break;
        }
    }

    if (target_Node)
    {
        new_Node->next_Node = target_Node->next_Node;
        traversing_Node->prev_Node = new_Node;
        new_Node->prev_Node = target_Node;
        target_Node->next_Node = new_Node;
    }
    else
        cout << "Vlue not found\n";
}
void Doubly_Linked_List::delete_(double val)
{
    Node* traversing_Node = head, * temp = nullptr;

    if (head->data == val)
    {
        temp = head->next_Node;
        delete head;
        head = temp;
        head->prev_Node = nullptr;
    }
    else
    {

        while (traversing_Node)
        {
            if (traversing_Node->data != val)
            {
                traversing_Node = traversing_Node->next_Node;
            }

            else
            {

                break;
            }
        }
        if (traversing_Node == nullptr)
        {
            cout << "Given Value not found\n";
        }
        else
        {

            traversing_Node->prev_Node->next_Node = traversing_Node->next_Node;
            if (traversing_Node->next_Node)
            {
                traversing_Node->next_Node->prev_Node = traversing_Node->prev_Node;
            }
            if (traversing_Node)
            {
                delete traversing_Node;
            }
            else
            {
                cout << "Given Value not found\n";
            }
        }
    }
}
void Doubly_Linked_List::reverseDisplay()
{
    cout << "Printing in Reverse Order\n";
    Node* traversing_Node = last;
    while (traversing_Node)
    {
        cout << traversing_Node->data << " ";
        traversing_Node = traversing_Node->prev_Node;
    }
    cout << endl;
}