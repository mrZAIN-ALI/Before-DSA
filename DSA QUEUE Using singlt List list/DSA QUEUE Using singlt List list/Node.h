#ifndef NODE
#define NODE
#include<iostream>
using namespace std;
class Node
{
	string name;
	int age;
	Node* next;
	Node* prev;
	Node(string nam, int ag)
	{
		name = nam;
		age = ag;
		next = nullptr;
		prev = nullptr;
	}
	friend class QueOfPerson;
};
//Node::Node(string nam, int ag)
//{
//	name = nam;
//	age = ag;
//	next = nullptr;
//	prev = nullptr;
//}
#endif