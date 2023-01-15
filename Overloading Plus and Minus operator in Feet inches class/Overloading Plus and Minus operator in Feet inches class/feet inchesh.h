#ifndef FEETINCHES_H
#define FEETINCHES_H
class FeetInches
{
private:
	int feet;
	int inches;
	void simplify();

public:

	void setFeet(int f) { feet = f; }
	void setInches(int i) { inches = i; }

	int getFeet() { return feet; }
	int getInches() { return inches; }

	FeetInches(int , int );

	FeetInches operator + (const FeetInches&);
	FeetInches operator - (const FeetInches&);



};
#endif