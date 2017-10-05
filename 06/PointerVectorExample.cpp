#include <iostream>
#include <vector>
#include "PointerVectorExample.h"
#include "Score.h"

using namespace std;

namespace samples
{
	void PointerVectorExample()
	{
		vector<Score*> myScoreList;
		myScoreList.reserve(5);

		myScoreList.push_back(&Score(30, "class 1"));
		myScoreList.push_back(&Score(59, "class 2"));
		myScoreList.push_back(&Score(87, "Java"));
		myScoreList.push_back(&Score(74, "class 3"));
		myScoreList.push_back(&Score(41, "class 4"));

		PrintVector(myScoreList);

		for (vector<Score*>::iterator iter = myScoreList.begin(); iter != myScoreList.end();)
		{
			Score* score = *iter;
			if (score->GetClassName() == "Java")
			{
				iter = myScoreList.erase(iter);
			}
			else
			{
				iter++;
			}
		}
		PrintVector(myScoreList);

		for (vector<Score*>::iterator iter = myScoreList.begin(); iter != myScoreList.end(); ++iter)
		{
			iter = myScoreList.erase(iter);
		}
		myScoreList.clear();

		for (vector<Score*>::iterator iter = myScoreList.begin(); iter != myScoreList.end(); ++iter)
		{
			Score* score = *iter;

			if (score->GetScore() == 30)
			{
				score->SetScore(100);
			}
		}
		cout << "After chaning the score of class 1" << endl;
		PrintVector(myScoreList);
	}

	void PrintVector(const vector<Score*>& scores)
	{
		for (vector<Score*>::const_iterator iter = scores.begin(); iter != scores.end(); iter++)
		{
			Score* score = *iter;
			score->PrintVariables();
		}
		cout << endl;
	}
}