#include <cassert>
#include <fstream>
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
		const int END_OF_LINE = 52;

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
			int studentNumber;

			switch (input)
			{
			case 'a':
				++recordCount;
				record = InputRecord();
				WriteFileRecord(outputStream, record);
				break;

			case 'b':
				cout << "Which student do you wanna modify?" << "[range : 1 to " << recordCount << "]";
				cin >> studentNumber;

				if (cin.fail())
				{
					cout << "Wrong input. " << endl;
					break;
				}
				cin.ignore(LLONG_MAX, '\n');

				outputStream.seekp(END_OF_LINE * (studentNumber - 1));
				outputStream << '\n';

				for (size_t i = 0; i < END_OF_LINE; ++i)
				{
					outputStream << " ";
				}
				outputStream.seekp(-END_OF_LINE, ios::cur);

				record = InputRecord();
				WriteFileRecord(outputStream, record);
				break;

			case 'x':
				return;

			default:
				assert(false);
				break;
			}
			PrintRecords(inputStream, recordCount);
		}
		inputStream.close();
		outputStream.close();
	}

void PrintRecords(ifstream& inputStream, int printCount)
{
	string record;

	for (size_t i = 0; i < printCount; ++i)
	{
		getline(inputStream, record);
		cout << record << endl;
	}
}

void WriteFileRecord(ofstream& outputStream, Record& record)
{
	const size_t NAME_BYTE = 20;
	const size_t ID_BYTE = 9;
	const size_t SCORE_BYTE = 3;

	outputStream.setf(ios::left);

	outputStream << record.FirstName;
	outputStream.seekp(NAME_BYTE - record.FirstName.length(), ios::cur);

	outputStream << record.LastName;
	outputStream.seekp(NAME_BYTE - record.LastName.length(), ios::cur);

	outputStream << record.StudentID;
	outputStream.seekp(ID_BYTE - record.StudentID.length(), ios::cur);

	outputStream << record.Score;
	outputStream.seekp(SCORE_BYTE - record.Score.length(), ios::cur);

	outputStream << '\n';
}