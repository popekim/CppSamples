#include <iostream>
#include <string>
#include "ScoreList.h"

namespace samples
{
	ScoreList::ScoreList(int score, std::string studentName)
		: mScore(score)
		, mStudentName(studentName)
	{
	}

	void ScoreList::Print() const
	{
		std::cout << "<" << mStudentName << ", " << mScore << ">" << std::endl;
	}
}