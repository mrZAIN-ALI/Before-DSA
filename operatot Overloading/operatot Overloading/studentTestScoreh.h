#ifndef STUDENTTESTSCORE_H
#define STUDENTTESTSCORE_H
#include<string>
using namespace std;
class StudentTestScore
{
	int numberOfTestSocres = 0;
	double *testScores = nullptr;
	string name;

	void createTestScoreArray(int size)
	{
		numberOfTestSocres = size;
		testScores = new double[size];
		for (int i = 0; i < size; i++)
		{
			testScores[i] = 0;
		}
	}

public:

	//constructor

	StudentTestScore(string, int);
	~StudentTestScore();

	//copyConstructor
	StudentTestScore(const StudentTestScore&);

	void setStudentName(string name) { this->name = name; };
	void setSpecificSocre(double, int);
	double getSpecificScore(int);
	string getStudentName() { return name; }
	int getNumberOftestSocres() { return numberOfTestSocres; }

	void operator = (const StudentTestScore& objOnRght)
	{
		delete[] testScores;
		this->name = objOnRght.name;
		this->numberOfTestSocres = objOnRght.numberOfTestSocres;
		createTestScoreArray(numberOfTestSocres);

		for (int i = 0; i < numberOfTestSocres; i++)
		{
			this->testScores[i] = objOnRght.testScores[i];
		}
	}

	void showObjState();
};
#endif	
