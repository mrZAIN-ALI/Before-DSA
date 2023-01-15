#ifndef INTSTACK_H
#define INTSTACK_H
class IntStack
{
	int* stackArray;
	int top;
	int stack_Size;

public:
	IntStack(int);
	IntStack(const IntStack&);
	~IntStack() { delete[] stackArray; }

	void push(int);
	void pop(int&);
	bool isEmpty() const ;
	bool isFull() const ;
};
#endif