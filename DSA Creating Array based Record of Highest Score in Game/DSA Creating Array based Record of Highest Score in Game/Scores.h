#ifndef SCORES.H
#define SCORES.H
#include"GameEntries.h"
class Scores
{
	int maxScores;
	int num_Of_Scores;
	GameEntries* entries;
public:
	Scores(int);
	void add(GameEntries& ent);
	GameEntries& remove(int);
};

#endif