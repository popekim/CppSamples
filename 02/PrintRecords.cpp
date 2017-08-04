#include <fstream>
#include <iostream>
#include <string>
#include "PrintRecords.h"

using namespace std;

namespace samples
{
	void InputRecords(Record* info)
	{
		cout << "First name: ";
		cin >> info->FirstName;
		
		cout << "Last name: ";
		cin >> info->LastName;
		
		cout << "Student ID: ";
		cin >> info->StudentID;

		cout << "Score:  ";
		cin >> info->Score;
	}

	void ManageRecordsExample()
	{
		Record studentInfos[5];
		ofstream fileStream("studentRecords.dat", ios_base::out);

		int existingStudents = 1;

		studentInfos[0].FirstName = "Pope";
		studentInfos[0].LastName = "Kim";
		studentInfos[0].StudentID = "A12345678";
		studentInfos[0].Score = 80;

		PrintRecords(&studentInfos[0], &fileStream, existingStudents);

		while (true)
		{
			char input;

			cout << "a: adds another student info. " << "b : Modifies existing info. " << endl;
			cin >> input;

			if (input == 'a')
			{
				existingStudents++;

				if (existingStudents > 5)
				{
					cout << "Addable amount exceeded" << endl;
					break;
				}
				InputRecords(&studentInfos[existingStudents - 1]);
			}
		
			else if (input == 'b')
			{
				int studentNumber;

				cout << "Select one number which you wanna modify from 1 to 5."
					<< "(Current exsiting students: " << existingStudents << ")" << ": ";
				cin >> studentNumber;

				if (studentNumber > 0 && studentNumber <= existingStudents)
				{
					InputRecords(&studentInfos[existingStudents - 1]);
					cout << "Modified. " << endl;
				}

				else
				{
					cout << "Out of range. " << endl;
					break;
				}
			}

			else
			{
				break;
			}
			PrintRecords(studentInfos, &fileStream, existingStudents);
		}
		fileStream.close();
	}

	void PrintRecords(const Record* const info, ofstream* const filestream, const int existingStudents)
	{
		filestream->seekp(0);

		for (size_t i = 0; i < existingStudents; i++)
		{
			*filestream << info[i].FirstName << " " << info[i].LastName << " "
				<< info[i].StudentID << " " << info[i].Score << endl;
		
			cout << info[i].FirstName << " " << info[i].LastName << " "
				<< info[i].StudentID << " " << info[i].Score << endl;
		}
	}
}