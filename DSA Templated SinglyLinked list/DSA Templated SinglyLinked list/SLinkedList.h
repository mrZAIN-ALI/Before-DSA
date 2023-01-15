#pragma once
#include"Node.h"
template<class T>
class SLinkedList
{
	Node<T>*head;
	Node<T>*last;

public:
	void setHead(Node<T>* h) { head = h; }
	Node<T>* getHead() { return head; }
	void setLast(Node<T>* l) { last = l; }
	Node<T>* getLast() { return last; }

	SLinkedList();
	~SLinkedList();

	void insetAtHead(T);
	void insertAtTail(T);
	void display();
	bool isEmpty();
	
};
