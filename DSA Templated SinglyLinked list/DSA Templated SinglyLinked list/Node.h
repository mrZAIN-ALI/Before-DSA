#pragma once
template <class T>
class Node
{
	T data;
	Node<T>* next;

	Node(T);
	template<class T >
	friend class SLinkedList<T>;
};
template<class T>
Node<T>::Node(T val)
{
	data = val;
	next = nullptr;
}