#pragma once
#include<iostream>
using namespace std;
typedef int DataType;
class Node {
    DataType data;
    Node* next;

    Node(DataType da) :data(da) {};

    friend class ClinkedList;
};
class ClinkedList
{
    Node* head, * last, * cursor;
public:

    ClinkedList();
    // ~ClinkedList();
    void display();
    void add(DataType);
    DataType remove();
    bool isEmpty();
    // bool isFUll();  
    DataType front();
    DataType back();
    void advance();
};
ClinkedList::ClinkedList()
{
    head = last = cursor = nullptr;
}
bool ClinkedList::isEmpty()
{
    return head == nullptr;
}

void ClinkedList::add(DataType val)
{
    Node* new_Node = new Node(val);

    if (!head)
    {
        head = new_Node;
        new_Node->next = head;
        last = new_Node;
        cursor = new_Node;
    }
    else
    {
        new_Node->next = head;
        last->next = new_Node;
        last = new_Node;
        cursor = new_Node;
    }

}
DataType ClinkedList::remove()
{
    DataType ReturnVal;
    if (isEmpty())
    {
        return 0;
    }
    else if (cursor->next)
    {
        Node* temp = cursor->next;
        cursor->next = temp->next;
        ReturnVal = temp->data;
        delete temp;
    }
    return ReturnVal;
}
void ClinkedList::display()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        Node* traversingNOde = cursor;

        do
        {
            cout << traversingNOde->data << " ";
            traversingNOde = traversingNOde->next;
        } while (traversingNOde != cursor);
        cout << endl;
    }

}
DataType ClinkedList::front()
{
    if (isEmpty())
    {
        return 0;
    }

    return head->data;
}
DataType ClinkedList::back()
{
    if (isEmpty())
    {
        return 0;
    }

    return last->data;
}
void ClinkedList::advance()
{
    if (cursor->next)
    {
        cursor = cursor->next;
    }

}