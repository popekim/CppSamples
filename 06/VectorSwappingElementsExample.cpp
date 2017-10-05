#include <iostream>
#include <vector>
#include "VectorSwappingElementsExample.h"

using namespace std;

namespace samples
{
	void PrintScoreList(const std::vector<int>& scores)
	{
		cout << "- Current elements : ";
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); ++iter)
		{
			cout << *iter << " ";
		}
		cout << endl;

		cout << "- Current capacity : " << scores.capacity() << endl;
		cout << "- Current size : " << scores.size() << endl << endl;
	}

	void VectorSwappingElementsExample()
	{
		vector<int> myScoreList;
		myScoreList.reserve(5);

		myScoreList.push_back(85);
		myScoreList.push_back(73);

		cout << "myScoreList" << endl;
		PrintScoreList(myScoreList);

		vector<int> yourScoreList;
		yourScoreList.assign(7, 100);

		myScoreList.swap(yourScoreList);

		cout << "myScoreList" << endl;
		PrintScoreList(myScoreList);

		cout << "yourScoreList" << endl;
		PrintScoreList(yourScoreList);
	}
}