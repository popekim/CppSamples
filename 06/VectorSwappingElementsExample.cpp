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
		vector<int> scores;
		scores.reserve(2);

		scores.push_back(85);
		scores.push_back(73);

		cout << "scores" << endl;
		PrintScoreList(scores);

		vector<int> anotherScores;
		anotherScores.assign(7, 100);

		scores.swap(anotherScores);

		cout << "scores" << endl;
		PrintScoreList(scores);

		cout << "anotherScores" << endl;
		PrintScoreList(anotherScores);
	}
}