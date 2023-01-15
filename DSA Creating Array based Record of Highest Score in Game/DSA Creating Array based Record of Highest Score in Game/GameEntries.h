#pragma once
#include<iostream>
using namespace std;
class GameEntries
{
	int score;
	string name;

public:
	GameEntries(int s=0, string n="") :score(s), name(n) {}
	void setScore(int s) { score = s; }
	int getScore() { return score; }
	void setName(string n) { name = n; }
	string getName() { return name; }
};
