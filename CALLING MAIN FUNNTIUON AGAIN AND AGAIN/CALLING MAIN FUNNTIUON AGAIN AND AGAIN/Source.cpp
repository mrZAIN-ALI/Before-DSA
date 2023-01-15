#include<iostream>
using namespace std;
void fun();
int main()
{
	fun();
	return 0;

}
void fun()				//Program will crash
{
	int* ptr = new int[10000000];
	fun();
}
/*
void fun()				//program will not crash
{
	int* ptr = new int[10000000];
	delete ptr;
	fun();
}*/