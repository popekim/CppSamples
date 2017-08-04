#pragma once

struct Record
{
	string FirstName;
	string LastName;
	string StudentID;
	unsigned int Score;
};

namespace samples
{
	void InputRecords(Record* info);
	
	void ManageRecordsExample();

	void PrintRecords(const Record* const info, std::ofstream* const filestream, const int existingStudents);
}
