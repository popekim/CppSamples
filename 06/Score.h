#include <iostream>

#pragma once

using namespace std;

namespace samples
{
	class Score
	{
	public:
		Score(int score, const string className);

		string GetClassName() const;
	
		void PrintVariables() const;

	private:
		int mScore;
		string mClassName;
	};
}