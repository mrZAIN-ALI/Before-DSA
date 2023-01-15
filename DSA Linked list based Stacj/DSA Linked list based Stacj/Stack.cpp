#include"Stack.h"
#include<iostream>
using namespace std;
bool Stack::isEpmty()
{
	if (!top)
	{
		return true;
	}
	else
		return false;
}

void Stack::push(int val)
{
	Node* new_Node = new Node(val);

	if (!top)
	{
		top = new_Node;
	}
	else
	{
		new_Node->set_Next_Node(top);
		setTop(new_Node);
	}
}
int Stack::pop()
{
	if (!isEpmty())
	{
		int return_val = top->getData();
		Node* deleteAble_node = top;
		setTop(top->get_Next_Node());
		delete deleteAble_node;

		return return_val;
	}
	else
	{
		cout << "stack is Empty\n";
		return 0000;
	}
}
void Stack::display()
{
	Node* traversingNode = top;
	while (traversingNode)
	{
		cout << traversingNode->getData() << endl;
		traversingNode = traversingNode->get_Next_Node();
	}
	cout << endl;
}
Stack::~Stack()
{
	Node* prevNode,
		*traversingNOde = getTop();
	while (traversingNOde)
	{
		prevNode = traversingNOde;
		traversingNOde = traversingNOde->get_Next_Node();
		delete prevNode;
	}
}