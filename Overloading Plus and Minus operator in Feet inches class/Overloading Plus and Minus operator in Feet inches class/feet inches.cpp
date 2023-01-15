#include"feet inchesh.h"
#include<cstdlib>

void FeetInches::simplify()
{
	 if (inches >= 12)
	 {
		 feet += (inches / 12);
		 inches = (inches % 12);
	 }
	 else if (inches < 0)
	 {
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	 }
} 
FeetInches::FeetInches(int f=0, int i=0)
{
	feet = f;
	inches = i;
	simplify();
	
}

FeetInches FeetInches::operator + (const FeetInches& obj)
{
	FeetInches temp;
	temp.feet = feet + obj.feet;
	temp.inches = inches + obj.inches;
	simplify();
	return temp;
}

FeetInches FeetInches::operator - (const FeetInches& obj)
{
	FeetInches temp;
	temp.feet = feet - obj.feet;
	temp.inches = inches - obj.inches;
	simplify();
	return temp;
}