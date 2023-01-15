#ifndef  NUMBERLIST_H
#define NUMBERLIST_H
#include<iostream>
using namespace std;
template<class T >
class List_Node
{
public:
	T value;
	List_Node<T>* next_Node = nullptr;
	List_Node(T val)
	{
		value = val;
		next_Node = nullptr;
	}
};
template<class T >
class Number_List
{
	List_Node<T>* head;
public:
	Number_List() { head = nullptr; }
	//~Number_List();

	void append_Node(T);
	void display_Nodes();
	void insert_Node(T);
	void delete_Node(T);
};
template<class t>
void Number_List<t>::append_Node(t new_val)
{
	List_Node<t>* new_Node = nullptr;
	List_Node<t>* traversing_Node = nullptr;
	new_Node = new List_Node<t>(new_val);
	/*new_Node->value = new_val;*/

	if (!head)
	{
		head = new_Node;
		/*new_Node->next_Node = nullptr;*/
	}
	else
	{
		traversing_Node = head;
		while (traversing_Node->next_Node)
		{
			traversing_Node = traversing_Node->next_Node;
		}

		traversing_Node->next_Node = new_Node;

	}
}
template<class t>
void Number_List<t>::display_Nodes()
{
	List_Node<t>* traversing_Node;
	traversing_Node = head;
	while (traversing_Node != nullptr)
	{
		cout << traversing_Node->value << "->";
		traversing_Node = traversing_Node->next_Node;
	}
	
}
template<class t>
void Number_List<t>::insert_Node(t val)
{
	List_Node<t>* new_Node=nullptr;
	List_Node<t>* previous_Node=nullptr;
	List_Node<t>* traversing_Node=nullptr;
	new_Node = new List_Node<t>(val);

	if (!head)
	{
		head = new_Node;
	}
	else
	{
		traversing_Node = head;
		previous_Node = nullptr;
		while (traversing_Node && val>traversing_Node->value)
		{
			previous_Node = traversing_Node;
			traversing_Node = traversing_Node->next_Node;
		}

		if (previous_Node == nullptr)
		{
			head = new_Node;
			head->next_Node = traversing_Node;
		}
		else
		{
			previous_Node->next_Node = new_Node;
			new_Node->next_Node = traversing_Node;
		}
	}
}
template<class t>
void Number_List<t>::delete_Node(t val)
{
	List_Node<t>* previous_Node = nullptr;
	List_Node<t>* traversing_Node = nullptr;

	if (head->value == val)
	{
		traversing_Node = head->next_Node;
		delete head;
		head = traversing_Node;
	}
	else
	{
		traversing_Node = head;
		while (traversing_Node->value != val)
		{
			previous_Node = traversing_Node;
			traversing_Node = traversing_Node->next_Node;
		}

		previous_Node->next_Node = traversing_Node->next_Node;
		delete traversing_Node;
	}
}
#endif // ! NUMBERLIST_H
