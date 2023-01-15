#include"NumberList.h"
#include<iostream>
using namespace std;
void NumberList::appendNode(double val)
{
	List_Node* new_Node=nullptr;
	List_Node* traversing_Node=nullptr;
	
	new_Node = new List_Node;

	new_Node->value = val;
	new_Node->next_node = nullptr;

	if (!head)
	{
		head = new_Node;
		new_Node->next_node = nullptr;
	}
	else
	{
		traversing_Node = head;

		while (traversing_Node->next_node)
		{
			traversing_Node = traversing_Node->next_node;
		}
		traversing_Node->next_node = new_Node;
	}
}
void NumberList::displayNode()
{
	List_Node* traversing_node=nullptr;

	traversing_node = head;
	while (traversing_node)
	{
		cout << traversing_node->value<<" -> ";
		traversing_node = traversing_node->next_node;

	}
}
void NumberList::insertNode(double num)
{
	List_Node* new_Node=nullptr;
	List_Node* previous_Node=nullptr;
	List_Node* traversing_Node=nullptr;
	new_Node=new List_Node;
	new_Node->value = num;
	
	if (!head)
	{
		head = new_Node;
		new_Node->next_node = nullptr;
	}
	else
	{
		traversing_Node = head->next_node;
		previous_Node = nullptr;

		while (traversing_Node != nullptr && num > traversing_Node->value)
		{
			previous_Node = traversing_Node;
			traversing_Node = traversing_Node->next_node;
		}

		if (previous_Node == nullptr)
		{
			head = new_Node;
			new_Node->next_node = head->next_node;
		}
		else
		{

			previous_Node->next_node = new_Node;
			new_Node->next_node = traversing_Node;

		}
	}
}