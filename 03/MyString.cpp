#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

MyString::MyString(const char* string)
	: mSize(strlen(string) + 1)
{
	mString = new char [mSize];
	memcpy(mString, string, mSize);
}

MyString::MyString(const MyString& string)
	: mSize(string.mSize)
{
	mString = new char[mSize];
	memcpy(mString, string.mString, mSize);
}

MyString::~MyString()
{
	delete[] mString;
}

void MyString::PrintString()
{
	cout << "Member string : " << mString << endl;
}
