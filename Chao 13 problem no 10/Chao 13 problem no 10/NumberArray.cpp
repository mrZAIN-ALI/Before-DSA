#include"NumberArray.h"
//#include<iostream>
using namespace std;
NumArray::NumArray(int s)
{
	size = s;
	ptr = new float[size];

	for (int j = 0; j < size; j++)
	{
		ptr[j] = 0;
	}
}

NumArray::~NumArray()
{
	delete [] ptr;
}
void NumArray::storeNum(int ind,float val)
{
	if (ind <= size && size>0) 
	{
		ptr[ind-1] = val;
	}
	else
	{
		do
		{
			cout << "Please enter value according to given index range is from 1 to " << size<<" : ";
			cin >> ind;
		} while (ind<0 || ind >size);
		ptr[ind - 1] = val;
	}
}

float NumArray::retriveNum(int ind)
{
	if (ind <= size && size>0)
	{
		return ptr[ind - 1] ;
	}
	else
	{
		do
		{
			cout << "Please enter value according to given index range is from 1 to " << size;
			cin >> ind;
		} while (ind>0 || ind >size);
		return ptr[ind - 1] ;
	}
}

float NumArray::highVal()
{
	float hVal = 0;
	hVal = ptr[0];
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > hVal)
		{
			hVal = ptr[i];

		}
	}
	return hVal;
}

float NumArray::lowVal()
{
	float lVal = 0;
	lVal = ptr[0];
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] < lVal)
		{
			lVal = ptr[i];

		}
	}
	return lVal;
}

float NumArray::aver()
{
	float sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += ptr[i];
	}

	return (sum / size);
}