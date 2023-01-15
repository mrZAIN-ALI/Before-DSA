#include"IntStack.h"
#include<iostream>
using namespace std;
IntStack::IntStack(int siz)
{
	stack_Size = siz;
	top = -1;
	stackArray = new int[siz];
}
IntStack::IntStack(const IntStack& obj)
{
	if (obj.stack_Size > 0)
	{
		stackArray = new int[obj.stack_Size];
	}
	else
	{
		stackArray = nullptr;
	}

	for (int i = 0; i < obj.stack_Size; i++)
	{
		stackArray[i] = obj.stackArray[i];
	}
	top = obj.top;
}
void IntStack::push(int num)
{
	if (isFull())
	{
		cout << "Stack is full\n";
	}
	else
	{
		top++;
		stackArray[top] = num;
	}
}
void IntStack::pop(int& val)
{
	if (isEmpty())
	{
		cout << "stack is empty\n";
	}
	else
	{
		val = stackArray[top];
		top--;
	}
}
bool IntStack::isFull() const
{
	bool status;

	if (top == stack_Size - 1)
	{
		status = true;
	}
	else
		status = false;

	return status;
}
bool IntStack::isEmpty() const
{
	bool status;

	if (top ==  - 1)
	{
		status = true;
	}
	else
		status = false;

	return status;
}