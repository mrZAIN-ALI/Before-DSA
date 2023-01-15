#include<iostream>
using namespace std;
#include"studentTestScoreh.h"

StudentTestScore::StudentTestScore(string name, int size)
{
	this->name = name;
	
	createTestScoreArray(size);
}
StudentTestScore::~StudentTestScore()
{
	delete [] testScores;
}
void StudentTestScore::setSpecificSocre(double score, int index)
{
	testScores[index] = score;
}

double StudentTestScore::getSpecificScore(int index)
{
	return testScores[index];
}

StudentTestScore::StudentTestScore(const StudentTestScore& obj)
{
	this->name = obj.name;
	this->numberOfTestSocres = obj.numberOfTestSocres;
	testScores = new double[numberOfTestSocres];

	for (int i = 0; i < numberOfTestSocres; i++)
	{
		this->testScores[i] = obj.testScores[i];
	}
}
void StudentTestScore::showObjState()
{
	cout << "Name is : " << name << endl;
	cout << "Number of Test scores are : " << getNumberOftestSocres()<<endl;
	cout << "Test Scores are : ";
	for (int i = 0; i < numberOfTestSocres; i++)
	{
		cout << this->testScores[i] << " | ";
	}
	cout << endl;
}