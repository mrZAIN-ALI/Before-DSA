#ifndef BASE_H
#define BASE_H
#include<iostream>
using namespace std;
class Base
{
	double privateScore;
protected:
	double protectedScore;
public:
	double publicScore;

	double getPtivte() { return privateScore; }
	double getProtected() { return protectedScore; }
	double getPublic() { return publicScore; }
	void setProt(double pr) { protectedScore = pr; }
	Base(double pub, double prot, double priv)
	{
		publicScore=pub;
		protectedScore = prot;
		privateScore = priv;
		cout << "constructor of base\n";
	}
	Base()
	{
		publicScore = 0;
		protectedScore = 0;
		privateScore = 0;
	}
	~Base()
	{
		cout << "Destructor of Base\n";
	}
};
#endif