#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
struct Payroll
{
	string employeeID,		//employee id
		employeeName,		//employee name
		designaation,		//designaiton OR cuttrnt job
		month;			//to hold month name
	int leaves = 0, allowLeaves = 0;	//allowed leaves by dep
	double perleaveDetRate = 0.0, bSallary = 0.0,	//Basic sallaey
		tSallary = 0.0;		//Total sallary
};
const int SIZE = 100;
Payroll empData[SIZE];
int cnt = 0;				//Global counter
///////////////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>  FUNTIONS   <<<<<<<<<<<<<<<<<<<<<<<////////////////////////////////// 
int menu();
void inData();
void printSal();
void inDataSingle();
string slipDiscrip(int);
double calSalary(double, double, int, int);
string getFullName();
void load_File();
void save_Data(int);
void save_spf_D(int);
void valid_ID();
bool check_ID();
bool check_name();
bool check_desig();
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	load_File();
	int choice;
	do
	{
		choice = menu();
		switch (choice)
		{
		case (1):
			inData();
			break;
		case (2):
			printSal();
			break;
		case (3):
			inDataSingle();
			break;
		}
	} while (choice != 4);
}

int menu()				//Menu Funtion 
{
	cout << cnt;
	int temp;
	cout <<	"\t\t\t\t PAY ROLL MANAGEMENT SYSTEM \t developed by\n\t\t\t\t\t\t\t\t ZAIN ALI @cpyright reserved\n";
	cout << setw(95) << setfill('#') << " \n";
	cout <<	"1.Enter 1 to enter information of employees to manage salary of specific month.\n";
	cout << "2.Enter 2 to print salary slip.\n";
	cout << "3.Enter 3 to enter iformation of new employee \n";
	cout << "4.Enter 4 to quit :";
		cin >> temp;
	cout << setw(85) << setfill('#') << " \n";
	while (temp < 1 || temp > 4)
	{
		cout << "Please enter Value Btetween 1 and 4 ,Try again :";
		cin >> temp;
	}
	return temp;
}

void inData() //>>>>>>>>>>>>>>>	FOR CASE 1	<<<<<<<<<<<<<<<<<<<<<<<//
{
	do
	{
		cout << "Enter Employee ID : ";
		cin.ignore();
			getline(cin, empData[cnt].employeeID);
		if (empData[cnt].employeeID == "-1")
		{
			break;
		}
		if (check_ID())									//Checking existence of Unique ID
		{
			cout << setw(30) << setfill('>') << " ";
			cout << "Employee with given ID does not Exist ,Try again :";
			cout << setw(30) << setfill('<') << " \n\t\t\t\t";
			cin.ignore(NULL);
				getline(cin, empData[cnt].employeeID);

		}   
		empData[cnt].employeeName = getFullName();
		
		if (check_name())								//checking existence of UNIQUE NAME
		{
			cout << setw(30) << setfill('>') << " ";
			cout << "Employee with given Name does not Exist ,Try again :";
			cout << setw(30) << setfill('<') << " \n";
			cin.ignore(NULL);
				empData[cnt].employeeName = getFullName();

		}								
		cout << "Enter Designation of Employee : ";
		cin.ignore(NULL);
			getline(cin, empData[cnt].designaation);
		if (check_desig())							 //checking Unique Designation
		{
			cout << setw(30) << setfill('>') << " ";
			cout <<	"Employee with given designation does not Exist ,Try again :";
			cout << setw(30) << setfill('<') << " \n\t\t\t\t";
			cin.ignore(NULL);
			getline(cin, empData[cnt].designaation);

		}
		cout << "Enter Basic salary of Employee : ";
		cin >> empData[cnt].bSallary;

		cout << "Enter Month of Salary : ";
			cin >> empData[cnt].month;
		for (int i = 0; i < cnt; i++)
		{
			if (empData[cnt].month == empData[i].month)			//If user enter Existing Month
			{
				cout << "Enter No of Leavs :";
					cin >> empData[i].leaves;

				cout << "Enter No of Allowed leaves : ";
					cin >> empData[i].allowLeaves;

				cout << "Enter Per leave Deduction Rae : ";
					cin >> empData[i].perleaveDetRate;
				empData[i].tSallary =calSalary(empData[i].bSallary, empData[i].perleaveDetRate,empData[i].allowLeaves, empData[i].leaves);
				save_spf_D(i);
				break;
			}
			else
			{
				cout << "Enter No of Leavs :";
					cin >> empData[cnt].leaves;

				cout << "Enter No of Allowed leaves : ";
					cin >> empData[cnt].allowLeaves;

				cout << "Enter Per leave Deduction Rae : ";
					cin >> empData[cnt].perleaveDetRate;
				cout << "To quit Entering Data Enter -1 :\n";
				empData[cnt].tSallary =	calSalary(empData[cnt].bSallary,empData[cnt].perleaveDetRate,empData[cnt].allowLeaves, empData[cnt].leaves);
				save_Data(cnt);

			}
		}
		cnt++;
	} while (1);
	cout << "Writing Data SuccessFull \n";

}

void printSal()			//>>>>>>>>>>>>>>>	FOR CASE 2	<<<<<<<<<<<<<<<<<<<<<<<//
{
	int i = 0;
	string mon;
	cout << "Please Enter Month for salary slip : ";
	cin >> mon;
	cout << "\n\n";
	while (i < cnt)
	{
		if (empData[i].month == mon)
		{
			cout << setw(48) << setfill('/') << " \n";
			cout << "Salary Month : " << empData[i].month << endl;
			cout << setw(45) << setfill('-') << " \n";
			cout << "Employee Name : " << empData[i].employeeName << endl;
			cout << setw(45) << setfill('-') << " \n";
			cout << "Enployee Designation : " << empData[i].designaation << endl;
			cout << setw(45) << setfill('-') << " \n";
			empData[i].tSallary =calSalary(empData[i].bSallary, empData[i].perleaveDetRate,empData[i].allowLeaves, empData[i].leaves);
			cout << fixed << showpoint << setprecision(2);
			cout << "Salary : " << empData[i].tSallary << "$" << endl;
			cout << setw(45) << setfill('-') << " \n";
			cout << slipDiscrip(i) << endl;
			cout << setw(48) << setfill('/') << " \n\n\n";
		}

		i++;
	}
}

void inDataSingle()   //>>>>>>	FOR CASE 3	<<<<<<<//
{

	cout << "Enter Employee ID : ";
	cin.ignore();
		getline(cin, empData[cnt].employeeID);
	valid_ID();

	empData[cnt].employeeName = getFullName();

	cout << "Enter Designation of Employee : ";
	cin.ignore(NULL);
		getline(cin, empData[cnt].designaation);

	cout << "Enter Basic salary of Employee : ";
		cin >> empData[cnt].bSallary;

	cout << "Enter Month of Salary : ";
		cin >> empData[cnt].month;

	cout << "Enter No of Leavs :";
		cin >> empData[cnt].leaves;

	cout << "Enter No of Allowed leaves : ";
		cin >> empData[cnt].allowLeaves;

	cout << "Enter Per leave Deduction Rae : ";
		cin >> empData[cnt].perleaveDetRate;
	empData[cnt].tSallary =calSalary(empData[cnt].bSallary, empData[cnt].perleaveDetRate,empData[cnt].allowLeaves, empData[cnt].leaves);
	save_Data(cnt);
	
	cout << "Writing Data SuccessFull \n";

}

string slipDiscrip(int index)                   //>>>>>>>>>>>>>>>	FOR Printing Label of SLIP	<<<<<<<<<<<<<<<<<<<<<<<//
{
	string outDis;
	outDis =
		empData[index].employeeID + "_" + empData[index].employeeName + "_" +
		empData[index].month + "_salaryslip.txt";
	fstream outF;
	outF.open(outDis, ios::out);
	outF << empData[index].month << "\t";
	outF << empData[index].employeeName << "\t";
	outF << empData[index].designaation << "\t";
	outF << empData[index].tSallary << "\t" << endl;

	return outDis;
}

double calSalary(double basicSal, double perLdR, int allowL, int leaves)	//salary calculator
{
	double salary = 0.0;
	if (leaves > allowL)
	{
		salary = basicSal - ((leaves - allowL) * perLdR);
	}
	else
		salary = basicSal;
	return salary;
}

string getFullName()			//Funtion to get FUll name wiht Under score
{
	string firstname, lastname, fName;
	cout << "Enter First Name of Employee : ";
	cin.ignore(NULL);
		getline(cin, firstname);

	cout << "Enter Second  Name of Employee : ";
	cin.ignore(NULL);
		getline(cin, lastname);
	fName = firstname + "_" + lastname;
	return fName;
}

void load_File()		//FOr Loading FILE into array
{
	fstream inFile;
	inFile.open("EmployeesManagementSystem.txt", ios::in);
	if (inFile)
	{
		while (!inFile.eof())
		{

			inFile >> empData[cnt].employeeID;
			if (inFile.eof())
			{
				break;
			}
			inFile >> empData[cnt].employeeName;
			inFile >> empData[cnt].designaation;
			inFile >> empData[cnt].bSallary;
			inFile >> empData[cnt].month;
			inFile >> empData[cnt].leaves;
			inFile >> empData[cnt].allowLeaves;
			inFile >> empData[cnt].perleaveDetRate;
			inFile >> empData[cnt].tSallary;
			cnt++;
		}
		inFile.close();
	}
}

void save_Data(int index)							//Saving Data to array
{
	fstream outFile;
	outFile.open("EmployeesManagementSystem.txt", ios::app);
	if (outFile)
	{
		outFile << empData[index].employeeID << "\t";
		outFile << empData[index].employeeName << "\t";
		outFile << empData[index].designaation << "\t";
		outFile << empData[index].bSallary << "\t";
		outFile << empData[index].month << "\t";
		outFile << empData[index].leaves << "\t";
		outFile << empData[index].allowLeaves << "\t";
		outFile << empData[index].perleaveDetRate << "\t";
		outFile << empData[index].tSallary << "\n";

		outFile.close();
	}
	else
	{
		cout << "Unable to Load File 'Fetal Error' ";
	}
}

void save_spf_D(int index)		//For Saving Edited information of Specific month
{
	fstream outFile;
	outFile.open("EmployeesManagementSystem.txt", ios::out);
	if (outFile)
	{
		for (int i = 0; i < cnt; i++)
		{
			outFile << empData[i].employeeID << "\t";
			outFile << empData[i].employeeName << "\t";
			outFile << empData[i].designaation << "\t";
			outFile << empData[i].bSallary << "\t";
			outFile << empData[i].month << "\t";
			outFile << empData[i].leaves << "\t";
			outFile << empData[i].allowLeaves << "\t";
			outFile << empData[i].perleaveDetRate << "\t";
			outFile << empData[i].tSallary << "\n";
		}
		outFile.close();
	}
	else
	{
		cout << "Unable to Load File 'Fetal Error' ";
	}
}

void valid_ID()				//Validation for Unique ID
{
	int k = 0;
	while (k < cnt)
	{
		while (empData[k].employeeID == empData[cnt].employeeID)
		{
			cout << "ID already Exist please Enter UNIQUE ID : ";
			getline(cin, empData[cnt].employeeID);
		}
		k++;
	}
}

bool check_ID()								//For checking Existence of ID
{
	bool flag;
	int k = 0;
	while (k < cnt)
	{

		if (empData[cnt].employeeID != empData[k].employeeID)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
		k++;
	}
	return flag;
}

bool check_name()						//For checking Existence of Name
{
	bool flag;
	int k = 0;
	while (k < cnt)
	{

		if (empData[cnt].employeeName != empData[k].employeeName)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
		k++;
	}
	return flag;
}

bool check_desig()					//For checking Existence of ID
{
	bool flag;
	int k = 0;
	while (k < cnt)
	{

		if (empData[cnt].designaation != empData[k].designaation)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
		k++;
	}
	return flag;
}


