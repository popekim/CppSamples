#pragma once

namespace samples
{
	// TODO: Print records
	// Use this structure
	//const int NAME_SIZE = 10;
	//const int ID_SIZE = 10;
	//struct record
	//{
	//	char FirstName[10];
	//	char LastName[10];
	//	char StudentID[10];
	//	int Score;
	//};
	// #1. Get a record information from keyboard
	//		- using while()
	// #2. Save the record in a file
	//		- using ofstream
	//		- file name: studentRecord.dat
	//		- Make file as a binary file <- Check ios_base::binary
	//		- To read easily, when you save records, fix width
	//			e.g.)       Pope      Kima12345678100
	//				  0123456789012345678901234567890 <- for guideline
	// #3. Open the file again
	//		- using fstream
	// #4. Display all information
	//		- use structure when you read information
	//		e.g.)
	//		 0.       Pope        Kim: a12345678: 100
	//		 1. Alecxander  BlackShot: a98745632:  10 
	//		...
	//		10.      David        Heo: a95175324:  99 <- you don't need to make 10 data...
	//		01234567890123456789012345678901234567890 <- for guideline
	// #5. After display, ask what information to fix
	//		e.g.)
	//		Enter the number to change: 1
	//		What is the updated score: 20 <- Let's change only score
	// #6. Find the correct location of score, then update it
	//		- using seekp()
	// #7. Display all information again
	// #8. Close the program
	void WriteRecordsExample(); // Step 1-2, and 8
	void UpdateRecordsExample(); // Step 3-7, and 8
}