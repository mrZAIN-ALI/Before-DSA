#pragma once
#include<iostream>
using namespace std;
class NumberList {
    class Node {
    public:
        double value;
        Node* next=nullptr;
    };

    Node* head;
public:
    NumberList();
    void displayList();
    void insetAtBegin(double);
    void insertAtEnd(double);
    void updateValue(double, double);
    bool searach(double);
    void insetAfter(double, double);
    void sort_IN_Accending();
    void sort_In_Decending();

};