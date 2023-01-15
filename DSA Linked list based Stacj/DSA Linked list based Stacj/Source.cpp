#include"Stack.h"
#include<iostream>
using namespace std;
int main()
{
	Stack s;
	//s.pop();
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);


	s.pop();
	s.display();
	
	return 0;

}