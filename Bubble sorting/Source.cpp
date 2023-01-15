#include<iostream>
using namespace std;
void sortarray(int[], int);
void showarray(int[], int);
int main()
{
	const int SIZE=8;
	int test[SIZE] = { 4545,434,643,234,6455,4324,767,8562 };
	cout << "Values of unsorted array are : ";
	showarray(test, SIZE);
	sortarray(test, SIZE);
	cout << "Values of sorted arry are : ";
	showarray(test, SIZE);
	return 0;

}
void sortarray(int givenarr[], int size)
{
	bool swap;
	int temp=0;
	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (givenarr[i] < givenarr[i + 1])//decending sorting
			{
				temp=givenarr[i];
				givenarr[i] = givenarr[i + 1];
				givenarr[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
void showarray(int givenarr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << givenarr[i]<<endl;
	}
}