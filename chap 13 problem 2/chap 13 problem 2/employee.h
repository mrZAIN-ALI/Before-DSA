#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name;
	string department;
	string position;
	int idNumber;

public:
	void setName(string);
	void setDep(string);
	void setPosition(string);
	void setId(int);

	string getName() ;
	string getdep() const;
	string getpostion() const ;
	int getId() const ;

	Employee(string nAME, int id, string depa, string posi)
	{
		name = nAME;
		idNumber = id;
		department = depa;
		position = posi;
	}
	
	Employee(string name1, int id2)
	{
		department = " ";
		position = " ";
		name = name1;
		idNumber = id2;

	}


	Employee()
	{
		
		name = " ";
		department = " ";
		position = " ";
	
		idNumber = 0;
	}
	void status()
	{

		cout << "-----------------------------------------------------\n";
		cout << "Name of Employee is : "<<getName()<<endl;
		cout << "Position of Employee is : " << getpostion() << endl;
		cout << "Department of Employee is : " <<getdep() << endl;
		cout << "id of Employee is : " << getId() << endl;
		cout << "-----------------------------------------------------\n";

	}

};
