#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
    double data;

    Node* next_Node;
    Node* prev_Node;

    Node(double val)
    {
        data = val;
        prev_Node = nullptr;
        next_Node = nullptr;
    }
    Node()
    {
        prev_Node = nullptr;
        next_Node = nullptr;
    }
};
class Doubly_Linked_List
{

public:
    Node* head;
    Node* last;
    Doubly_Linked_List();

    void insert(double);
    void display();
    void insert_At_head(double);
    void inset_Before_Given_val(double, double);
    void delete_(double);
    void reverseDisplay();
};