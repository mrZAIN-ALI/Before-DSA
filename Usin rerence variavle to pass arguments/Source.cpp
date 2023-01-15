#include<iostream>
using namespace std;
void getNum(int&);
void mulNum(int&);
int main()
{
	int value;
	getNum(value);
	cout << endl;
	mulNum(value);
	cout << "Podoct of your number with 2 is  : " << value;
}
void getNum(int& Num)
{
	cout << "Enter any Number : ";
	cin >> Num;

}
void mulNum(int& numprod)
{
	numprod *= numprod;
}