#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	const int num_students = 2, num0f_subj = 2;
	double total=0,av=0, mark[num_students][num0f_subj];
	
	cout << "This program calulate av of each student's marks : \n";
	for (int row = 0; row < num_students; row++)
	{
		for (int col = 0; col < num0f_subj; col++)
		{
			cout << "Enter marks # "<<col+1 <<" of student # " << row + 1 << " : ";
			cin >> mark[row][col];
			cout << endl;
			total += mark[row][col];
		}
			av = total / num0f_subj;
			cout << "Average of student # " << row + 1 << " is " << av;
			cout << endl;
		
	}
	return 0;
}