#include<iostream>
using namespace std;
bool isEven(int);
int getnumb();
int main()
{
	int inNum;
	cout << "This program check The Given number is even or odd \n";
	inNum=getnumb();
	if (isEven(inNum))
	{
		cout << "The given number is Even : \n ";

	}
	else
		cout << "The given number is Odd \n ";
	return 0;


}
int getnumb() 
{
	int numb;
	cout << "Enter any intefer and i will tell you\n that it is eve or odd \n : ";
	cin >> numb;
		return numb;

}
bool isEven(int inNum)
{
	bool flag;
	if ((inNum % 2) == 0)
		flag = true;
	else
		flag =false;
	return flag;
}