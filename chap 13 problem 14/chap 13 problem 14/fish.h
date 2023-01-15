#include<string>
#include<ctime>
using namespace std;
class Fish
{
	string currentfishStatus;
	float totPoints;
public:
	
	string getCurrStatus();
	float getTotPoints();
	void settot(float);
	int toss();
	void getFish(int);
	float getPoint(string );
};