#include"instructor.h"
#include"textbook.h"
#include<string>
using namespace std;
class Course
{
	Instructor instructor;
	TextBook textbook;
	string courseName;
public:
	Course(string, string, string, string, string, string, string);
	~Course();
	void print();
};