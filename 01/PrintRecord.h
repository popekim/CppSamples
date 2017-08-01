#pragma once

namespace samples
{
	// TODO: Print ONE record
	// #1. Get a record info from keyboard and save it into string variables
	//		record info: First Name(10 MAX), Last Name(10 MAX), StudentNumber(a+8numbers), Score(0-100)
	//		e.g.) Pope Kim a12345678 100
	// #2. Using istringstream, split a record to 3 string and 1 integer variables
	//		string line; // record info
	//		string firstName, string lastName, string studentID, int score
	// #3. Using ostringstream, print above variables. For widths, use setw().
	//		print format: Last Name + ", " + First Name + ": " + Student Number + ": " + Score
	//		e.g.) "       Kim,       Pope: a12345678: 100"
	//		e.g.) "       Heo,      Divid: a32165498:  99"
	//             01234567890123456789012345678901234567 <- width guideline
	void PrintRecordExample();
}