#pragma once
#include"Node.h"
class Stack
{
	Node* top;
public:
	Stack() { top = nullptr; }

	void setTop(Node* t) { top = t; }
	Node* getTop() { return top; }
	char peek() { return top->data; }
	void push(char);
	char pop();
	bool isEmpty();
	void display();
};
