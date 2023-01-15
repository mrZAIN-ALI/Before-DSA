#pragma once
#include<iostream>
using namespace std;
class Queue
{
    int MAX_SIZE = 5;
    int acutal_len;
    int front;
    int back;
    int* array_for_queue;
public:

    Queue();
    void enqueue(int);
    int dequeu();
    bool isFull();
    bool isEmpty();
    void display();
    void set_Max_size(int siz) { MAX_SIZE = siz; }
};
bool Queue::isEmpty()
{
    return acutal_len == 0;
}
bool Queue::isFull()
{
    return acutal_len == MAX_SIZE;
}
Queue::Queue()
{
    array_for_queue = new int[MAX_SIZE];
    acutal_len = 0;
    front = 0;
    back = -1;
}
void Queue::enqueue(int val)
{
    if (isFull())
    {
        return;
    }
    else
    {
        acutal_len++;
        // front++;
        back++;
        back = back % MAX_SIZE;
        array_for_queue[back] = val;


    }

}
int Queue::dequeu()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        int returnVal = array_for_queue[front];
        acutal_len--;
        front++;
        front = front % MAX_SIZE;

        return returnVal;
    }

}
void Queue::display()
{
    for (int i = 0; i < acutal_len; i++)
    {
        
        cout << "\nposition " << i + 1 << " :" << array_for_queue[(i + front) % MAX_SIZE] << "   ";
    }
    cout << endl;

}