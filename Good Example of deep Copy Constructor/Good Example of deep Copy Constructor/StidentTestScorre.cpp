#include"studentTestScore.h"
TestScore::TestScore(int size)
{
	getArrOftestScore(size);
	
}
TestScore::~TestScore()
{
	delete[] testScore;
}

void TestScore::setSpecificVal(double val, int index)
{
	testScore[index] = val;
}

double TestScore::getSepcificScore(int index)
{
	return testScore[index];

}

int TestScore::getNumberOFtest()
{
	return numberOftestSocres;
}

//PROPER COPY CONSTRUCTOR	

TestScore::TestScore(const TestScore& obj)
{
	numberOftestSocres = obj.numberOftestSocres;

	testScore = new double[numberOftestSocres];

	for (int i = 0; i < numberOftestSocres; i++)
	{
		testScore[i] = obj.testScore[i];
	}
}