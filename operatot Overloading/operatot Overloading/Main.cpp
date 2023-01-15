#include"studentTestScoreh.h"
#include<string>
#include<iostream>
using namespace std;
int main()
{
	StudentTestScore student1("ZAIN",3);
	student1.setSpecificSocre(100, 0);
	student1.setSpecificSocre(95, 1);
	student1.setSpecificSocre(93, 2);

	student1.showObjState();

	StudentTestScore student2("Farjad", 3);
	student1.setSpecificSocre(93, 0);
	student1.setSpecificSocre(95, 1);
	student1.setSpecificSocre(94, 2);

	cout << "Before Using operator Overloading \n";
	student2.showObjState();

	cout << "after Using operator Overloading \n";

	//Using operator overloading 
	student2 = student1;
	student2.showObjState();

	return 0;

}