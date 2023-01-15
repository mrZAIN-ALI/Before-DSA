class Payment
{
	double loan;
	double IRate;
	int numOfyears;
public:
	void setLoan(double);
	void setIrate(double);
	double getmonthlyPay();
	double getTotalamount();
	void setNumOfyears(int);
};