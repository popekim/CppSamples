#include <iostream>
#include <vector>
#include "VectorAddingElementsExample.h"

using namespace std;

namespace samples
{
	void VectorAddingElementsExample()
	{
		vector<int> scoreList;
		scoreList.reserve(7);

		scoreList.push_back(30);
		scoreList.push_back(50);
		scoreList.push_back(80);
		scoreList.push_back(65);
		scoreList.push_back(73);

		PrintScoreList(scoreList);

		scoreList.pop_back();
		scoreList.pop_back();

		PrintScoreList(scoreList);

		scoreList.resize(10);

		PrintScoreList(scoreList);
	}

	void PrintScoreList(vector<int> scoreList)
	{
		cout << "Current elements : ";
		for (vector<int>::iterator  iter = scoreList.begin(); iter != scoreList.end(); ++iter)
		{
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity : " << scoreList.capacity() << endl;
		cout << "Current size : " << scoreList.size() << endl << endl;
	}
}