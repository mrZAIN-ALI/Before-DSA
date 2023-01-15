#include<iostream>
using namespace std;
int searchlist( int[], int, int);
int main()
{
	const int  SIZE = 5;
	int list[SIZE] = { 55,44,22,55,100 };
	int result;
	result = searchlist(list, SIZE, 22);
	
	if (result == -1)
		cout << "You have not earned any point \n";
	else
	{
		cout << "You have earned 100 point on test # " << result + 1;
	}
}
int searchlist( int searchList[], int size, int searchingVal)
{
	bool flag = false;
	int index = 0,position=-1;
	
	while (index < size && !flag)
	{
		if (searchList[index] == searchingVal)
		{
			position = index;
			flag = true;
		}
		index++;
	}
	return position;
}