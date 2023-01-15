#include<iostream>
#include<iomanip>
using namespace std;
void feeout(double, int);
int main()
{
	cout << setw(71) << setfill('#') << " \n";
	const double adult = 40, senior = 30, child = 20;
	cout << "Now i am drivint  payout funtion with argument  " << adult<<"(adult) and 10 \n";
	feeout(adult, 10);



	cout << "Now iam driving fee out funtion with arguments " << senior << "(senior) and 33 ";
	feeout(adult, 33);
	return 0;

}
void feeout(double rate, int months) {
	cout << "Total fee is $ ";
	cout << (rate * months)<<endl;
}