#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog()
{
	cout << "Dog : constructor" << endl;
}

Dog::Dog(int age, const char* size)
	:Animal(age)
{
	size_t length = strlen(size) + 1;
	mSize = new char[length];
	strcpy(mSize, size);
}

Dog::~Dog()
{
	delete[] mSize;
	cout << "Dog : destructor" << endl;
}

char* Dog::GetSize() const
{
	return mSize;
}