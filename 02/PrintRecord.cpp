#include <cassert>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include "PrintRecord.h"

using namespace std;

namespace samples
{
	void PrintRecordExample()
	{
		const int NAME_SIZE = 10;
		size_t count = 0;
		string record;

		string firstName;
		string lastName;
		string  studentID;
		unsigned int score;

		while (count < 4)
		{
			string input;

			switch (count)
			{
			case FirstName:
				cout << "First name: ";
				break;
			case LastName:
				cout << "Last name: ";
				break;
			case StudentID:
				cout << "Student ID: ";
				break;
			case Score:
				cout << "Score: ";
				break;
			default:
				assert(false);
				break;
			}

			cin >> input;

			if (count < StudentID && input.length() > NAME_SIZE)
			{
				cout << "Length exceeded." << endl;
				continue;
			}

			record += input + " ";
			count++;
		}

		istringstream Iss(record);
		ostringstream Oss;
		string output;

		Iss >> firstName >> lastName >> studentID >> score;
		Oss << lastName << "," << setw(3) << right
			<< firstName << ": " << studentID << "," << score << endl;

		output = Oss.str();
		cout << output << endl;
	}
}
