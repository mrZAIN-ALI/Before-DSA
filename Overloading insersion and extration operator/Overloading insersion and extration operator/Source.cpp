#include<iostream>
using namespace std;
class FeetInche;
ostream &operator << (ostream &outputstrm,FeetInche &right);
istream& operator >> (istream& inputStrm,FeetInche& right);
class FeetInche
{
	int feet=0;
	int inches=0;
public:

	void setFeet(int a) { feet = a; }
	void setInches(int b) { inches = b; }

	int getFeet()const { return feet; }
	int getInches()const { return inches; }

	friend ostream &operator << (ostream&,FeetInche&);
	friend istream &operator >> (istream&,FeetInche&);
	
};
int main()
{
	
	FeetInche d1;
	FeetInche d2;
	cin >> d1;
	cin >> d2;
	cout << d1;
	cout << endl;
	cout << d2;

	
}
ostream &operator << (ostream &outputstrm ,FeetInche& right)
{
	outputstrm << "Feet : " << right.feet<<endl;
	outputstrm << "Inches: " << right.inches<< endl;
	return outputstrm;
}
istream &operator >> (istream &inputStrm,FeetInche& right)
{
	
	cout << "enter feet: ";
	inputStrm >> right.feet;
	cout << "Enrer inches";
	inputStrm >> right.inches;
	return inputStrm;
}