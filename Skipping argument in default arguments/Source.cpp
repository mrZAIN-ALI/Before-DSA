#include<iostream>
using namespace std;
void starout(int=3, int=1);
int  main()
{
	cout << "This program uses dafalut arguments to print out stars \n";
	starout();
	
	starout(12, 22);

	starout(18, 34);
	return 0;
	
}
void starout(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
	
		for (int j = 0; j < col; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}