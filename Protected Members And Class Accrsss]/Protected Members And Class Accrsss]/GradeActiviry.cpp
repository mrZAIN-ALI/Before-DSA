#include"GradeActitvity.h"
using namespace std;

char GradeActivity::getLetter() const
{
	char letterGrade; // To hold the letter grade
	
	 if (score > 89)
		 letterGrade = 'A';
	 else if (score > 79)
		 letterGrade = 'B';
	 else if (score > 69)
		 letterGrade = 'C';
	 else if (score > 59)
		 letterGrade = 'D';
	 else
		letterGrade = 'F';
	 return letterGrade;
}
