#include <iostream>

#pragma once
namespace samples
{
	class ScoreList
	{
	public:
		ScoreList(int score, const std::string& studentName);
		void Print() const;

	private:
		int mScore;
		std::string mStudentName;
	};
}