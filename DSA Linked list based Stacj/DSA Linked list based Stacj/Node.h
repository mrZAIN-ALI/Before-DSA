#pragma once
class Node
{
	int data;
	Node* next;

public:
	Node(int val=0) { data=val,next = nullptr; }
	int getData() { return data; }
	void setData(int d) { data = d; }

	void set_Next_Node(Node* n) { next = n; }
	Node* get_Next_Node() { return next;}
};