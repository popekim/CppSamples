#include <iostream>
#include <vector>
#include "VectorCalculatingSumExample.h"

using namespace std;

namespace samples
{
	void CalculateSum(vector<int> scoreList)
	{
		if (scoreList.empty())
		{
			cout << "This score list is empty. " << endl;
		}
		else
		{
			int sum = 0;

			for (size_t i = 0; i < scoreList.size(); i++)
			{
				sum += scoreList.at(i);
			}
			cout <<  "sum : " << sum << endl << endl;
		}
	}

	void VectorCalculatingSumExample()
	{
		vector<int> myScoreList;
		vector<int> yourScoreList;

		myScoreList.reserve(5);
		yourScoreList.reserve(5);

		myScoreList.push_back(13);
		myScoreList.push_back(21);
		myScoreList.push_back(35);
		myScoreList.push_back(76);
		myScoreList.push_back(94);

		yourScoreList.push_back(61);
		yourScoreList.push_back(27);
		yourScoreList.push_back(83);
		yourScoreList.push_back(91);
		yourScoreList.push_back(100);

		yourScoreList.clear();

		cout << "myScoreList" << endl;
		CalculateSum(myScoreList);

		cout << "yourScoreList" << endl;
		CalculateSum(yourScoreList);
	}
}