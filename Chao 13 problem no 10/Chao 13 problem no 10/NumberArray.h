#include<iostream>
class NumArray
{
	float* ptr;
public:
	int size;
	//comstructor
	NumArray(int);
	//destructor
	~NumArray();

	//Mem Funtuions

	void storeNum(int ,float);
	float retriveNum(int);
	float highVal();
	float lowVal();
	float aver();



};