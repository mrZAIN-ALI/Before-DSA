#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	const int num_div = 3, num_quat = 4;
	int row, col;
	double sales[num_div][num_quat], total=0;

	cout << "this program calulate sales of comoany : \n";
	for (row = 0; row < num_div; row++)
	{
		for (col = 0; col < num_quat; col++)
		{
			cout << "Enter sales for divison # " << row + 1 << " and quater # " << col + 1<<" : ";
			cin >> sales[row][col];
			cout << endl;

		}
		
	}
	for (row = 0; row < num_div; row++)
	{
		for (col = 0; col < num_quat; col++)
		{
			total += sales[row][col];

		}
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "Total sales is equal to : " << total;
	_getch();
	return 0;
}