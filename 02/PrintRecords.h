#pragma once

struct Record
{
	string FirstName;
	string LastName;
	string StudentID;
	string Score;
};

namespace samples
{
	Record InputRecord(Record record);
	
	void ManageRecordsExample();

	void PrintRecords(std::ifstream* inputStream, int printCount);

	void WriteFileRecord(std::ofstream* outputStream, Record record, bool bAddRecordCount, int* recordCount);
}
