#include"SLinkedList.h"
#include<iostream>
using namespace std;

template <class T>
SLinkedList<T>::SLinkedList()
{
	setHead(nullptr);
	setLast(nullptr);
	
}
template<class T>
void SLinkedList<T>::insetAtHead(T val)
{
	Node<T>* newNode=new Node<T>(val)
	
	if (!getHead())
	{
		head = newNode;
	}
	else
	{
		Node<T>* TraversinNOde = head;

		while ()
		{

		}
	}
}