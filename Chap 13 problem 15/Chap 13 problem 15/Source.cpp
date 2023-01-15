#include<iostream>
#include"payment.h"
using namespace  std;
int main()
{
	double temp;
	int year;
	Payment person1;
	cout << "ENter Amount of loan : ";
	cin >> temp;
	person1.setLoan(temp);
	cout << "Enter Interest rate : ";
	cin >> temp;
	person1.setIrate(temp);
	cout << "Number of years :";
	cin >> year;
	person1.setNumOfyears(year);


	cout << "Here is monthly Payment : " << person1.getmonthlyPay()<<endl;
	cout << "here is Total payment : " << person1.getTotalamount();

}