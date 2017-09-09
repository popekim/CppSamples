#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(int age, const char* catHabit)
	: Animal(age)
{
	size_t size = strlen(catHabit) + 1;
	mCatHabit = new char[size];
	strcpy(mCatHabit, catHabit);
}

Cat::~Cat()
{
	delete[] mCatHabit;
	cout << "Cat : destructor" << endl;
}

const char* Cat::GetCatHabit() const
{
	return mCatHabit;
}