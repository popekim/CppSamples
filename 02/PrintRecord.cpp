#include <iostream>
#include <sstream>
#include <string>
#include "PrintRecord.h"

using namespace std;

namespace samples
{
	void PrintRecordExample()
	{
		string record = "Pope Kim A12345678 18";

		istringstream inputStream(record);
		ostringstream outputStream;

		for (size_t i = 0; i < 4; i++)
		{
			inputStream >> record;
			outputStream << record << " ";
		}
		cout << outputStream.str() << endl;
	}
}
