#include"coin.h"
#include<ctime>
#include<cstdlib>
#include<string>

void Coin::toss()
{
	int max = 1;
	int min = 0;
	int state;
	
	state = rand() % (max-min +1)-min;

	if (state == 1)
	{
		sideUp = "head";
	}
	else 
	{
		sideUp = "tail";
	}


}
Coin::Coin()
{
	toss();

	unsigned  seed;
	seed = time(0);
	srand(seed);

}
void Coin::tossUp()
{
	toss();
}

string Coin::getTossup()
{
	return sideUp;
}