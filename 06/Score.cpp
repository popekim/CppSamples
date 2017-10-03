#include <iostream>
#include <string>
#include "Score.h"

using namespace std;

namespace samples
{
	void Score::PrintVariables() const
	{
		cout << "(" << mScore << ", " << mClassName << ")" << " ";
	}

	string Score::GetClassName() const
	{
		return mClassName;
	}

	Score::Score(int score, const string className)
		: mScore(score), mClassName(className)
	{
	}
}