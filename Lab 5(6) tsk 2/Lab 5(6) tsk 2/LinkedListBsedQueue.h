#pragma once
#include <iostream>
using namespace std;
class Node
{
    int data;
    Node* next;
     public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    friend class Queue;
};
class Queue
{
    int MAX_SIZE = 5;
    int lenth = 0;
    int max_Size = MAX_SIZE;
    Node* front;
    Node* back;


public:
    bool isEmpty();
    bool isFUll();
    Queue(int);
    void enque(int);
    int deque();
    void display();
    void set_Max_Size(int size) { MAX_SIZE = size; }
};
bool Queue::isEmpty()
{
    if (!back)
    {
        return true;
    }
    else
        return false;

}
bool Queue::isFUll()
{
    return lenth == max_Size;
}
Queue::Queue(int size = 10)
{
    front = nullptr;
    back = nullptr;
}
void Queue::enque(int val)
{

    if (isFUll())
    {

        return;

    }
    else
    {

        Node* new_node = new Node(val);
        if (!back)
        {
            lenth++;
            back = new_node;
            front = new_node;
        }
        else
        {
            lenth++;
            Node* temp = back;
            back = new_node;
            new_node->next = temp;
        }
    }
}
int Queue::deque()
{
    if (isEmpty())
    {
        return -1;

    }
    else
    {
        lenth--;
        Node* traversingNode = back,
            * lastNode = nullptr;
        Node* secondLastNode = nullptr;
        while (traversingNode->next!=nullptr)
        {

            lastNode = traversingNode;
            traversingNode = traversingNode->next;
        }
        int returnVal = traversingNode->data;

        lastNode->next = nullptr;
        delete traversingNode;
        return returnVal;
    }
}
void Queue::display()
{
    int length = lenth;
    Node* traversingNode = back;
    if (isEmpty())
    {
        return;

    }
    else
    {
        while (traversingNode)
        {
            cout <<"Position " << length << " :" << traversingNode->data << "  ";
            traversingNode = traversingNode->next;
            length--;
        }
        cout << endl;
    }
}