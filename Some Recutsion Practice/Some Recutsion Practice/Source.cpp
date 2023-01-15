#include<iostream>
using namespace std;
int summArray(int * , int);
int * reverseArray(int*, int, int);
int main()
{
	int a[] = { 10,15,5};
	int sum = summArray(a, sizeof(a) / sizeof(int));
	cout << sum<<endl;

	int* reversedArray = reverseArray(a, 0,2);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		cout << reversedArray[i] << " ";
	}
	return 0; 
}
int summArray(int* arra, int n)
{
	if (n==1)
	{
		return arra[0];
	}

	return arra[n - 1] + summArray(arra, n - 1);
}

int * reverseArray(int* arr,int i, int j)
{
	if (i > j)
		return arr;
	if (i<j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		reverseArray(arr, i+=1, j-=1);
	return arr;
	}
}