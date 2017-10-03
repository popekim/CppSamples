#include <algorithm>
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
		myScoreList.push_back(Score(87, "Introducing C++"));
		myScoreList.push_back(Score(74, "class 3"));
		myScoreList.push_back(Score(41, "class 4"));

		cout << "Before erasing the element : ";
		for (vector<Score>::iterator iter = myScoreList.begin(); iter != myScoreList.end(); iter++)
		{
			(*iter).PrintVariables();
		}
		cout << endl;

		cout << "After erasing the element : ";
		for (vector<Score>::iterator iter = myScoreList.begin(); iter != myScoreList.end();)
		{
			if ((*iter).GetClassName() == "Introducing C++")
			{
				iter = myScoreList.erase(iter);
			}
			else
			{
				(*iter).PrintVariables();
				iter++;
			}
		}
	}
}