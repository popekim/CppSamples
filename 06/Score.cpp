#include <iostream>
#include <string>
#include "Score.h"

using namespace std;

namespace samples
{
	Score::Score(int score, const string& className)
		: mScore(score)
		, mClassName(className)
	{
	}

	int Score::GetScore() const
	{
		return mScore;
	}

	string Score::GetClassName() const
	{
		return mClassName;
	}

	void Score::PrintVariables() const
	{
		cout << mClassName << ": " << mScore;
	}
	
	void Score::SetScore(const int& score)
	{
		mScore = score;
	}



