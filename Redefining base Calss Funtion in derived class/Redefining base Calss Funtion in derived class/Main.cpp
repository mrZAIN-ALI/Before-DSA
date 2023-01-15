#include"CurvedActivity.h"
#include<iostream>
using namespace std;
int main()
{
	double numericScore;
	double percentage;

	CurvedActivity exam1;
	cout << "Enter Raw score :";
	cin >> numericScore;
	cout << "Enter Percetage  :";
	cin >> percentage;	

	exam1.setPercentage(percentage);
	exam1.setScore(numericScore);

	cout << "Numeruc score is :" << exam1.getRawScpre()<<endl;
	cout << "Curved Score is :" << exam1.getScore() << endl;
	cout << "Character grade is : " << exam1.getChar() << endl;
}