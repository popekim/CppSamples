#pragma once

class MyString
{
public:
	MyString(const char* string);
	MyString(const MyString& string);
	~MyString();

	void PrintString();

private:
	char* mString;
	int mSize;
};
