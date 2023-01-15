#include"Stack.h"
#include<iostream>
using namespace std;
bool Stack::isEmpty()
{
	if (top)
	{
		return false;
	}
	else
		return true;
}
void Stack::push(char val)
{
	Node* newNode = new Node(val);

	if (!getTop())
	{
		setTop(newNode);
	}
	else
	{
		newNode->next = getTop();
		setTop(newNode);

	}
}
char Stack::pop()
{
	Node* tempNode = new Node();
	tempNode = getTop();
	char ret = tempNode->data;

	setTop(tempNode->next);
	delete tempNode;
	
	return ret;
}
void Stack::display()
{
	Node* traversonNOde = getTop();

	while (traversonNOde)
	{
		cout << traversonNOde->data << " ";
		traversonNOde = traversonNOde->next;
	}
	cout << endl;
}