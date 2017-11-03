#include <iostream>
#include <string>
#include "ScoreList.h"

namespace samples
{
	ScoreList::ScoreList(int score, const std::string& studentName)
		: mScore(score)
		, mStudentName(studentName)
	{
	}

	void ScoreList::Print() const
	{
		std::cout << "<" << mStudentName << ", " << mScore << ">" << std::endl;
	}
}