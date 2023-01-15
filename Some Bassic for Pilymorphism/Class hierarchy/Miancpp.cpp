#include"PassFailExam.h"
#include"FinalExam.h"
#include<iostream>
#include<iomanip>
using namespace std;
void displayGrade(const GradeActivity& obj);
int main()
{
	GradeActivity obj(89);
	displayGrade(obj);
	
	FinalExam test1(100, 23);
	displayGrade(test1);

	//Now Let's See what happen if we make object of base class with funtion
	//Overridden , Will it call Base class Funtion or Derived Class Funtion
	//PassFail Activity Whihc is drived from GradeActivity has n over riddden
	//Funtion Whichi his getChar()
	
	PassFailActivity test2(80);
	//Even if we use following method it will cal base class fintion getChar()
	//test2.getChar()
	
	//Let's Try to Update the Valur Given in argument
	test2.setScore(85);
	cout << "Using local method \n";
	cout<<"Now i am going tp show value stored in pass fail acitivity object :"
		<<test2.getMinPassingScore()<<endl;

	displayGrade(test2);
	cout << "Conclusion : Even i have passed object of passfail activity It will "
		<< "It will still call funtion fo base Class\n";

	//According to getChar() belongs to Passfial Acitivity it should show pass or fail
	return 0;
}
void displayGrade(const GradeActivity& obj)
{
	cout << setprecision(1) << fixed;
	cout << "your Score is : " << obj.getScore()<<endl;
	cout << "your Grade is : " << obj.getChar()<<endl;
	

}
