#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string nameofF;
	int num;
	fstream inFile;
	cout << "Enter name of File you want to open with format tyoe hint 'list' : ";
	cin >> nameofF;
	inFile.open(nameofF, ios::in);
	if (inFile.fail())
		cout << "Fail to open file \n";
	else
	{
		while (inFile >> num)
			cout << num << endl;
	}
	inFile.close();
	return 0;


}