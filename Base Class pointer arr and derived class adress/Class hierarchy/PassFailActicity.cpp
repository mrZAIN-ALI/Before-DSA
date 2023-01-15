#include"PassFailactivity.h"
char PassFailActivity::getChar() const
{
	char letterGrade;
	
	if (score >= minPassingScore)
		 letterGrade = 'P';
	else
		 letterGrade = 'F';
	
	return letterGrade;
}