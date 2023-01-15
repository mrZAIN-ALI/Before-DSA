#ifndef QUEOFPERSON
#define QUEOFPERSON
#include"Node.h"
class QueOfPerson
{
	Node* head,
		* tail;

	int lenth;

public:
	QueOfPerson();
	void enQue(string, int);
	Node deQue();
	bool isEmpty();
	void display();
	int getLenth() { return lenth; }
	void incrementLenth() { lenth++; }
	void decrementLenth() { lenth--; }

	void setHead(Node* h) { head = h; }
	void setTail(Node* t) { tail = t; }

	Node* getHad() { return head; }
	Node* getTail() { return tail; }
};
#endif