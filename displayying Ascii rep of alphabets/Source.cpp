#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int Size = 10;
	char chara[Size] = { 'A','B','C','D','E','F','G','H','I','J' };
	cout << "Charachters \tAscii rep \n";
	cout << setw(25) << setfill('*') << " " << endl;

	for (int count = 0; count < Size; count++)
		cout << chara[count] << "\t\t" << static_cast<int>(chara[count]) << endl;
	
	return 0;
}