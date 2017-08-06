#include <fstream>
#include <iostream>
#include <string>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	Record InputRecord(Record record)
	{
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

		record.FirstName = "Pope";
		record.LastName = "Kim";
		record.StudentID = "A12345678";
		record.Score = "80";

		WriteFileRecord(&outputStream, record, true, &recordCount);

		while (true)
		{
			char input;

			cout << "a: add a student record. " << "b: Modify a student record. " << "x: exit" << endl;
			cin >> input;

			if (cin.fail())
			{
				cin.ignore();
				cin.clear();
				
				cout << "Wrong input. " << endl;
				continue;
			}

			if (input == 'a')
			{
				InputRecord(record);
				WriteFileRecord(&outputStream, record, true , &recordCount);
			}
		
			if (input == 'b')
			{
				int newLineCount = 0;
				int studentNumber;

				char fileCharacter;

				cout << "Which student do you wanna modify?" << "[range : 1 to recordCount]";
				cin >> studentNumber;
				
				if (cin.fail())
				{
					cin.ignore();
					cin.clear();

					cout << "Wrong input. " << endl;
					continue;
				}

				while (newLineCount != studentNumber - 1)
				{
					inputStream.get(fileCharacter);

					if (fileCharacter == '\n')
					{
						newLineCount++;
					}
				}
				InputRecord(record);
				WriteFileRecord(&outputStream, record, false, &recordCount);
			}

			if (input == 'x')
			{
				break;
			}

			PrintRecords(&inputStream, recordCount);
		}
		inputStream.close();
		outputStream.close();
	}

	void PrintRecords(ifstream* inputStream, int printCount)
	{
		string record;

		for (size_t i = 0; i < printCount; ++i)
		{
			getline(*inputStream, record);
			cout << record << endl;
		}
	}

	void WriteFileRecord(std::ofstream* outputStream, Record record, bool bAddRecordCount, int* recordCount)
	{
		const size_t nameByte = 20;
		const size_t IDByte = 9;
		const size_t scoreByte = 3;

		outputStream->setf(ios::left);

		*outputStream << record.FirstName;
		outputStream->seekp(nameByte - record.FirstName.length(), ios::cur);

		*outputStream << record.LastName;
		outputStream->seekp(nameByte - record.LastName.length(), ios::cur);

		*outputStream << record.StudentID;
		outputStream->seekp(IDByte - record.StudentID.length(), ios::cur);

		*outputStream << record.Score;
		outputStream->seekp(scoreByte - record.Score.length(), ios::cur);

		*outputStream << '\n';

		if (!bAddRecordCount)
		{
			return;
		}
		*recordCount++;
	}
}