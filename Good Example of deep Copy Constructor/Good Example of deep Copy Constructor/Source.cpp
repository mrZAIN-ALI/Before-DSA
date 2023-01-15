#include<iostream>
#include"studentTestScore.h"
using namespace std;
int main()
{
	double temp;
	int numOFScore=0;
	
	cout << "Enter Number of Test Scores : ";
	cin >> numOFScore;
	
	TestScore s1(numOFScore);

	cout << "ENter Valur to enter at index 0 ";
	cin >> temp;
	s1.setSpecificVal(temp, 0);

	cout << "Now i am creating another object of name s2 \n";
	TestScore s2(s1);
	cout << "Here is test score value at index 0 from s1 " << s1.getSepcificScore(0) << endl;
	cout << "Here is test score value at index 0 from s2 " << s2.getSepcificScore(0)<<endl;
	
	cout << "Now i am setting 292 at index 0 of s2 \n";
	s2.setSpecificVal(292, 0);

	cout << "Here is test score value at index 0 from s1 " << s1.getSepcificScore(0)<<endl;
	cout << "Here is test score value at index 0 from s2 " << s2.getSepcificScore(0)<<endl;


}