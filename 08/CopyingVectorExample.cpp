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
		vector<ScoreList> scoreList;

		scoreList.push_back(ScoreList(50, "Lulu"));
		scoreList.push_back(ScoreList(32, "Blitz"));
		scoreList.push_back(ScoreList(90, "Heimerdinger"));

		vector<ScoreList> copiedScoreList;
		copy(scoreList.begin(), scoreList.end(), copiedScoreList.begin());

		for (vector<ScoreList>::iterator it = copiedScoreList.begin(); it != copiedScoreList.end(); it++)
		{
			it->Print();
		}
	}
}