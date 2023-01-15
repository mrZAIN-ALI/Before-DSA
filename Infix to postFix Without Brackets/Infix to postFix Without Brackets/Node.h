#pragma once
class Node
{
	char data;
	Node* next;

	Node(char data = '\0') { next = nullptr, this->data = data; };
	friend class Stack;
};
