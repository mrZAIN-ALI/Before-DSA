#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include<iostream>
#include<new>
#include<cstdlib>

using namespace std;

template <class T>
class SimpleVector
{
	T* aptr;
	int array_size;
	void mem_Error();
	void sub_Error();
	
public:
	SimpleVector()
	{
		aptr = nullptr;
		array_size = 0;
	}

	SimpleVector(int);
	SimpleVector(const SimpleVector&);

	~SimpleVector();
	int get_Array_Size() { return array_size; }

	T get_specific_Element( int&);

	T& operator[](const int&);

};
template<class T>
void SimpleVector<T>::mem_Error()
{
	cout << "Memory Error cannot allocate array\n";
	exit(EXIT_FAILURE);
}

template<class T>
SimpleVector<T>::SimpleVector(int siz)
{
	array_size = siz;
	try
	{
		aptr = new T[array_size];
	}
	catch (bad_alloc)
	{
		mem_Error();
	}
	for (int i = 0; i < array_size; i++)
	{
		aptr[i] = 0;
	}

}

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	array_size = obj.array_size;

	aptr = new T[array_size];

	for (int i = 0; i < array_size; i++)
	{
		aptr[i] = obj.aptr[i];
	}
}
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (array_size > 0)
		delete[] aptr;
}
template<class T>
T SimpleVector<T>::get_specific_Element(int& index)
{
	if (index < 0 || index > array_size)
		sub_Error();
	return aptr[index];
}
template <class T>
void SimpleVector<T>::sub_Error()
{
	cout << "Error : : Subcript out of Range\n";
	exit(EXIT_FAILURE);
}
template<class T>
T& SimpleVector<T>::operator[](const int& i)
{
	if (i<0 || i>array_size)
	{
		cout <<"showing"<< array_size;
		sub_Error();
		exit(EXIT_FAILURE);
	}
	return aptr[i];
}
#endif