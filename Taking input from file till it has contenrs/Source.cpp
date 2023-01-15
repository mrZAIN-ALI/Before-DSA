#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int number;
	fstream inFile;
	inFile.open("list of number.txt", ios::in);
	while (inFile >> number)
	{
		cout << number<<endl;
	}
	inFile.close();
	return 0;
	
}