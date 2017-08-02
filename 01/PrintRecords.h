#pragma once

enum InputOrder
{
	FirstName,
	LastName,
	StudentID,
	Score
};

struct record
{
	char FirstName[10];
	char LastName[10];
	char StudentID[10];
	int Score;
};

namespace samples
{
	void WriteRecordsExample(); 
	void UpdateRecordsExample(); 
}