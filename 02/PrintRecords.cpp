#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "PrintRecords.h"

using namespace std;

const int STRING_SIZE = 10;
record Info;

ofstream Fout("studentRecords.dat", ios_base::out | ios_base::binary);

namespace samples
{
	void WriteRecordsExample()
	{
		size_t count = 0;

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

			if (count < Score && input.length() > STRING_SIZE)
			{
				cout << "Length exceeded." << endl;
				continue;
			}

			switch (count)
			{
			case FirstName:
				strcpy(Info.FirstName, input.c_str());
				break;
			case LastName:
				strcpy(Info.LastName, input.c_str());
				break;
			case StudentID:
				strcpy(Info.StudentID, input.c_str());
				break;
			case Score:
				Info.Score = atoi(input.c_str());
				break;
			default:
				assert(false);
				break;
			}
			count++;
		}
		Fout << Info.FirstName << setw(4) << right
			<< Info.LastName << ": " << Info.StudentID << "," << Info.Score;
	}

	void UpdateRecordsExample()
	{
		char letter;
		string input;

		fstream Fs("studentRecords.dat", ios_base::in | ios_base::out | ios_base::binary);

		Fs.open("studentRecords.dat");

		cout << Info.FirstName << setw(4) << right
			<< Info.LastName << ": " << Info.StudentID << "," << Info.Score << endl;

		cout << "Input a letter for information that you want to change. " << endl;
		cout << "Firstname : F, Lastname : L, Student ID: I, Score: S" << endl;

		cin >> letter;
		cin >> input;

		if (cin.fail())
		{
			return;
		}

		if (letter != 'S' && input.length() > STRING_SIZE)
		{
			cout << "Length exceeded. " << endl;
			return;
		}

		switch (letter)
		{
		case 'F':
			strcpy(Info.FirstName, input.c_str());
			break;
		case 'L':
			strcpy(Info.LastName, input.c_str());
			break;
		case 'I':
			strcpy(Info.StudentID, input.c_str());
			break;
		case 'S':
			Info.Score = atoi(input.c_str());
			break;
		default:
			assert(false);
			break;
		}

		Fout.seekp(0);
		Fout << Info.FirstName << setw(4) << right
			<< Info.LastName << ": " << Info.StudentID << "," << Info.Score;

		cout << Info.FirstName << setw(4) << right
			<< Info.LastName << ": " << Info.StudentID << "," << Info.Score << endl;

		Fs.close();
	}
}