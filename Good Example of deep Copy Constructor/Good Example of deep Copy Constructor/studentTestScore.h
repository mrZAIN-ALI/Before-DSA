class TestScore
{
	double *testScore=nullptr;
	int numberOftestSocres;
	void getArrOftestScore(int size)
	{
		numberOftestSocres = size;

		testScore = new double[size];
		for (int i = 0; i < size; i++)
		{
			testScore[i] = 0;
		}
	}
public:
	TestScore(const TestScore& obj);
	TestScore(int );
	~TestScore();
	void setSpecificVal(double, int);
	double getSepcificScore(int);
	int getNumberOFtest();

};
