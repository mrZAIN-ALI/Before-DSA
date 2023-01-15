#include"QueOfPerson.h"
#include<iostream>
using namespace std;

QueOfPerson::QueOfPerson()
{
	head = new Node(" ", 0);
	tail = new Node(" ", 0);
	getHad()->prev = nullptr;
	getHad()->next = getTail();
	getTail()->next = nullptr;
	lenth = 0;
}
void QueOfPerson::enQue(string na, int a)
{
	Node* new_Node = new Node(na, a);

	if (getHad()->next == tail )
	{
		new_Node->next = getTail();
		getTail()->prev = new_Node;
		getHad()->next = new_Node;
		new_Node->prev = getHad();
	}
	else
	{
		new_Node->next = getHad()->next;
		new_Node->prev = getHad();
		getHad()->next->prev = new_Node;
		getHad()->next = new_Node;
	}
}
void QueOfPerson::display()
{
	Node* traversingNode = getHad()->next;
	while (traversingNode!=tail)
	{
		cout<<traversingNode->name <<" " << traversingNode->age << " ";
		traversingNode = traversingNode->next;
	}
	cout << endl;
}