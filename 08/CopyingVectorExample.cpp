#include <algorithm>
#include <iostream>
#include <vector>
#include "CopyingVectorExample.h"
#include "ScoreList.h"

using namespace std;

namespace samples
{
	void CopyingVectorExample()
	{
		vector<ScoreList> scores;

		scores.push_back(ScoreList(50, "Lulu"));
		scores.push_back(ScoreList(32, "Blitz"));
		scores.push_back(ScoreList(90, "Heimerdinger"));

		vector<ScoreList> copiedScores;
		copy(scores.begin(), scores.end(), copiedScores.begin());

		for (vector<ScoreList>::iterator it = copiedScores.begin(); it != copiedScores.end(); it++)
		{
			it->Print();
		}
	}
}