#include<iostream>
using namespace std;
double  sumANDpro(double&, double&);
double sum;
int main()
{
	double &SUM=sum;
	
	double RETURN ,num1, num2;
	cout << "Enter Any two numbers : \n";
	cout << "Enrer number 1 : ";
	cin >> num1;
	cout << "Enter number 2 : ";
	cin >> num2;
	RETURN =sumANDpro(num1, num2);
	cout << "sum is : " << SUM; cout << endl;
	cout << "product is : " << RETURN;
}
double sumANDpro(double& Num, double& Num1)
{

	 sum = Num + Num1;
	double pro = Num * Num1;
	return pro;
	
}