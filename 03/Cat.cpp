#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
	cout << "Cat : constructor" << endl;
}

Cat::Cat(int age, const char* name)
	: Animal(age)
{
	size_t size = strlen(name) + 1;
	mName = new char[size];
	strcpy(mName, name);
}

Cat::~Cat()
{
	delete[] mName;
	cout << "Cat : destructor" << endl;
}

char* Cat::GetName() const
{
	return mName;
}