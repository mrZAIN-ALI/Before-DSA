#include"payment.h"
#include<math.h>
double Payment::getmonthlyPay()
{
	double tem,term;
	double monPay;
	tem = (1 + (IRate / 12));
	term = pow(tem, (12 * numOfyears));

	monPay = ((loan * (IRate / 12) * term) / (term - 1));
	return monPay;
}
double Payment::getTotalamount()
{
	return (12 * numOfyears * getmonthlyPay());

}
void Payment::setIrate(double rate)
{
	IRate = rate;
}

void Payment::setLoan(double ln)
{
	loan = ln;
}
void Payment::setNumOfyears(int years)
{
	numOfyears = years;
}