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
		myScoreList.push_back(&Score(87, "Introducing C++"));
		myScoreList.push_back(&Score(74, "class 3"));
		myScoreList.push_back(&Score(41, "class 4"));

		for (vector<Score*>::iterator iter = myScoreList.begin(); iter != myScoreList.end(); iter++)
		{
			(*iter)->PrintVariables();
		}

		for (vector<Score*>::iterator iter = myScoreList.begin(); iter != myScoreList.end();)
		{
			if ((*iter)->GetClassName() == "Introducing C++")
			{
				iter = myScoreList.erase(iter);
			}
			else
			{
				(*iter)->PrintVariables();
				iter++;
			}
		}
		myScoreList.clear();
	}
}