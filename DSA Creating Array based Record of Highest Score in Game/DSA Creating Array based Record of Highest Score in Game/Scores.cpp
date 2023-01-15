#include"Scores.h"
#include"GameEntries.h"
Scores::Scores(int max_Number_Of_Score=10)
{
	maxScores = max_Number_Of_Score;
	entries = new GameEntries[maxScores];
	num_Of_Scores = 0;
}
void Scores::add(GameEntries& const ent)
{
	int new_Score=ent.getScore();
	if (maxScores == num_Of_Scores)
	{
		if (new_Score <= entries[maxScores - 1].getScore())
		{
			return;
		}
	}
	else
		num_Of_Scores++;
	int i = maxScores - 2;

	while (i>=0 && new_Score>entries[i].getScore())
	{
		entries[i + 1] = entries[i];
	}
	entries[i] = ent;
	num_Of_Scores++;
}
GameEntries& Scores::remove(int i)
{
	if (i<0||i>= maxScores)
	{
		throw "IndexIsOutOfRange";
	}
	else
	{
		GameEntries en = entries[i];
		for (int j = i+1; j < maxScores; j++)
		{
			entries[j - 1] = entries[j];
			num_Of_Scores--;
		}

		return en;
	}
}