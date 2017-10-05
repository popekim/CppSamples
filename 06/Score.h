#include <iostream>

#pragma once

using namespace std;

namespace samples
{
	class Score
	{
	public:
		Score(int score, const string& className);

		int GetScore() const;

		string GetClassName() const;

		void PrintVariables() const;
		void SetScore(const int& score);

	private:
		int mScore;
		string mClassName;
	};
}