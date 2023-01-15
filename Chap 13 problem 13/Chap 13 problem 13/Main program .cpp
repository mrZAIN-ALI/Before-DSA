#include"coin.h"
#include<iostream>
using namespace std;
int main()
{
	float balance = 0.0;
	Coin quarter, dime, nickel;

	while (balance<1)
	{
		quarter.tossUp();
		if (quarter.getTossup() == "head")
		{
			balance += 0.25;
		}

		dime.tossUp();
		if (dime.getTossup() == "head")
		{
			balance += 0.25;
		}

		nickel.tossUp();
		if (nickel.getTossup() == "head")
		{
			balance += 0.25;
		}

	}

	if (balance>1.0 || balance<1.0)
	{
		cout << "AweFul you lost game and your balance is : " << balance;
	}
	else if (balance == 1.0)
	{
		cout << "congratulations you wind game and your balance is : " << balance;
	}
}