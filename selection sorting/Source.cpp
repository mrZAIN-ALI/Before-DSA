#include<iostream>
using namespace std;
void sortarray(int[], int);
void showarray(int[], int);
int main()
{
	const int SIZE = 7;
	int test[SIZE] = { 333,444,646,231,643,424234,643 };
	cout << "unsorted array is :";
	showarray(test, SIZE);
	sortarray(test, SIZE);
	cout << "SOrted array is : ";
	showarray(test, SIZE);
	
return 0;

}
void sortarray(int givenarr[], int size)
{
	int j;
	int minval, minindex;
	for (int i = 0; i < (size - 1); i++)
	{
		minindex = i;
		minval = givenarr[minindex];
		for ( j = (i + 1); j < size; j++)
		{
			if ( givenarr[j]<minval)
			{
				minval = givenarr[j];
				minindex = j;
			}
			
		}
		 givenarr[minindex] = givenarr[i];
		 givenarr[i] = minval;
	}
}
void showarray(int givenarr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << givenarr[i]<<"\t";
	}
	cout << endl;
}