#include <fstream>
#include <iostream>
#include <string>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	void ManageRecordsExample()
	{
		Record info;
		ofstream fileStream("studentRecords.dat", ios_base::out);

		while (true)
		{
			cout << "First name: ", cin >> info.FirstName;
			cout << "Last name: ", cin >> info.LastName;
			cout << "Student ID: ", cin >> info.StudentID;
			cout << "Score: ", cin >> info.Score;

			fileStream.seekp(0);
			fileStream << info.FirstName << " " << info.LastName << " "
				<< info.StudentID << " " << info.Score;

			cout << info.FirstName << " " << info.LastName << " "
				<< info.StudentID << " " << info.Score << endl;
		}
	}
}