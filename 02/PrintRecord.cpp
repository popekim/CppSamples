#include <iostream>
#include <sstream>
#include <string>
#include "PrintRecord.h"

using namespace std;

namespace samples
{
	void PrintRecordExample()
	{
		string firstName = "Pope";
		string lastName = "Kim";
		string studentID = "A12345678";
		string score = "80";

		istringstream inputStream;
		ostringstream outputStream;

		inputStream >> firstName >> lastName >> studentID >> score;
		outputStream << firstName << " " << lastName << " "<< studentID << " " << score;
		cout << outputStream.str() << endl;
	}
}
