#pragma once
#include"Node.h"

class Stack
{
	Node* top;
public:

	void setTop(Node* t) { top = t; }
	Node* getTop() { return top; }
	Stack() { top = nullptr; }
	~Stack();
	bool isEpmty();

	void display();
	void push(int);
	int pop();
};