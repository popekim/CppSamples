#include <iostream>
#include <vector>
#include "VectorSwappingElementsExample.h"

using namespace std;

namespace samples
{
	void PrintScoreList(std::vector<int> scoreList)
	{
		cout << "- Current elements : ";
		for (vector<int>::iterator iter = scoreList.begin(); iter != scoreList.end(); ++iter)
		{
			cout << *iter << " ";
		}
		cout << endl;

		cout << "- Current capacity : " << scoreList.capacity() << endl;
		cout << "- Current size : " << scoreList.size() << endl << endl;
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