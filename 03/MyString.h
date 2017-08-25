#pragma once

class MyString
{
public:
	MyString(const char* string);
	MyString(const MyString& reference);
	~MyString();

	void PrintString();

private:
	const int STRING_SIZE = 9;
	char* mString = new char[STRING_SIZE];

	int mCapacity;
	int mSize;
};
