#include <iostream>
#include <vector>
#include "ObjectVectorExample.h"
#include "Score.h"

using namespace std;

namespace samples
{
	void ObjectVectorExample()
	{
		vector<Score> myScoreList;
		myScoreList.reserve(5);

		myScoreList.push_back(Score(30, "class 1"));
		myScoreList.push_back(Score(59, "class 2"));
		myScoreList.push_back(Score(87, "Java"));
		myScoreList.push_back(Score(74, "class 3"));
		myScoreList.push_back(Score(41, "class 4"));

		cout << "Before erasing the element" << endl;
		PrintVector(myScoreList);

		cout << "After erasing the element" << endl;
		for (vector<Score>::iterator iter = myScoreList.begin(); iter != myScoreList.end();)
		{
			if (iter->GetClassName() == "Java")
			{
				iter = myScoreList.erase(iter);
			}
			else
			{
				iter++;
			}
		}
		PrintVector(myScoreList);

		cout << "After changing the score of class 1" << endl;
		for (vector<Score>::iterator iter = myScoreList.begin(); iter != myScoreList.end(); ++iter)
		{
			Score score = *iter;

			if (score.GetScore() == 30)
			{
				score.SetScore(100);
			}
		}
		PrintVector(myScoreList);
	}
	
	void PrintVector(vector<Score>& scoreList)
	{
		for (vector<Score>::iterator iter = scoreList.begin(); iter != scoreList.end(); iter++)
		{
			iter->PrintVariables();
		}
		cout << endl;
	}
}