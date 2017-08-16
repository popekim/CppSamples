#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	Record InputRecord()
	{
		Record record;

		cout << "First name: ";
		cin >> record.FirstName;

		cout << "Last name: ";
		cin >> record.LastName;

		cout << "Student ID: ";
		cin >> record.StudentID;

		cout << "Score:  ";
		cin >> record.Score;

		return record;
	}

	void ManageRecordsExample()
	{
		Record record;

		ofstream outputStream("studentRecords.dat");
		ifstream inputStream("studentRecords.dat");

		int recordCount = 0;
		const int RECORD_LENGTH = 52;

		record.FirstName = "Pope";
		record.LastName = "Kim";
		record.StudentID = "A12345678";
		record.Score = "80";

		WriteFileRecord(outputStream, record);
		++recordCount;

		while (true)
		{
			char input;

			cout << "a: add a student record. " << "b: Modify a student record. " << "x: exit" << endl;
			cin >> input;

			if (cin.fail())
			{
				cout << "Wrong input. " << endl;
				break;
			}
			cin.ignore(LLONG_MAX, '\n');

			int newLineCount = 0;
			int studentIndex;

			switch (input)
			{
			case 'a':
				++recordCount;
				record = InputRecord();
				WriteFileRecord(outputStream, record);
				break;

			case 'b':
				cout << "Which student do you wanna modify?" << "[range : 1 to " << recordCount << "]";
				cin >> studentIndex;

				if (cin.fail())
				{
					cout << "Wrong input. " << endl;
					break;
				}
				cin.ignore(LLONG_MAX, '\n');

				outputStream.seekp(RECORD_LENGTH * (studentIndex - 1));

				record = InputRecord();
				WriteFileRecord(outputStream, record);
				break;

			case 'x':
				return;

			default:
				assert(false);
				break;
			}

			string consoleRecord;

			for (int i = 0; i < recordCount; ++i)
			{
				getline(inputStream, consoleRecord);
				cout << consoleRecord << endl;
			}
		}
		inputStream.close();
		outputStream.close();
	}

	void WriteFileRecord(ofstream& outputStream, Record& record)
	{
		const int NAME_LENGTH = 20;
		const int ID_LENGTH = 9;
		const int SCORE_LENGTH = 3;

		outputStream << left;

		outputStream << record.FirstName;
		outputStream << setw(NAME_LENGTH - record.LastName.length);

		outputStream << record.LastName;
		outputStream << setw(NAME_LENGTH - record.LastName.length);

		outputStream << record.StudentID;
		outputStream << setw(ID_LENGTH - record.StudentID.length());

		outputStream << record.Score;
		outputStream << setw(SCORE_LENGTH - record.Score.length());

		outputStream << '\n';
	}
}