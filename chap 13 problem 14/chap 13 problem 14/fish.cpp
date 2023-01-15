#include"fish.h"
#include<string>
#include<iostream>
#include<ctime>
using namespace std;


string Fish::getCurrStatus()
{
	return currentfishStatus;
}
int Fish::toss()
{
	int max = 6;
	int min = 1;

	return (rand() % (max - min + 1) - min);
 }
void Fish::getFish(int n)
{
	switch (n)
	{
	case(1):
	{
		currentfishStatus = "Huge Fish";
	}
	break;

	case(2):
	{
		currentfishStatus = "Horse Fish";
	}
	break;

	case(3):
	{
		currentfishStatus = "A little Fish";
	}
	break;

	case(4):
	{
		currentfishStatus = "White Shark";
	}
	break;

	case(5):
	{
		currentfishStatus = "Salmon Fish";
	}
	break;

	case(6):
	{
		currentfishStatus = "Pirana Fish";
	}
	break;

		
	}
}

float Fish::getPoint(string name)
{
	if (name == "Huge Fish")
	{
		return 16;
	}
	else if (name == "Horse Fish")
	{
		return 12;
	}
	else if (name == "A little Fish")
	{
		return 14;
	}
	else if (name == "White Shark")
	{
		return 26;
	}
	else if (name == "Salmon Fish")
	{
		return 22;
	}
	else if (name == "Pirana Fish")
	{
		return 27;
	}
}

void Fish::settot(float x)
{
	totPoints=x;
}
float Fish::getTotPoints()
{
	return totPoints;
}