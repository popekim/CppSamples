#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

MyString::MyString(const char* string)
	: mCapacity(strlen(string))
	, mSize(strlen(string))
{
	memcpy(mString, string, strlen(string));
}

MyString::MyString(const MyString& reference)
	: mCapacity(strlen(reference.mString))
	, mSize(strlen(reference.mString))
{
	memcpy(mString, reference.mString, strlen(reference.mString));
}

MyString::~MyString()
{
	delete[] mString;
}

void MyString::PrintString()
{
	cout << "Member string : " << mString << endl;
}
