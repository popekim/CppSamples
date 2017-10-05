#include <iostream>
#include <vector>
#include "VectorCalculatingSumExample.h"

using namespace std;

namespace samples
{
	int CalculateSum(const vector<int>& scoreList)
	{
		int sum = 0;

		for (size_t i = 0; i < scoreList.size(); i++)
		{
			sum += scoreList[i];
		}
		return sum;
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
		cout << "Sum : " << CalculateSum(myScoreList) << endl << endl;

		cout << "yourScoreList" << endl;
		cout << "Sum : " << CalculateSum(yourScoreList) << endl << endl;
	}
}