#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int index = 15;
	int number[index] = {3,2,6,3,76,8,3,2,9657,344,123,65,87,2213,6423};
	int maxval;
	maxval = number[0];

	for (int count = 1; count < index; count++)
	{
		if (number[count] > maxval)
			maxval = number[count];
	}
	cout << maxval;
	_getch();
	return 0;
}