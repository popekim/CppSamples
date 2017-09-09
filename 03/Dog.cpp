#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog(int age, const char* dogHabit)
	:Animal()
{
	size_t length = strlen(dogHabit) + 1;
	mDogHabit = new char[length];
	strcpy(mDogHabit, dogHabit);
}

Dog::~Dog()
{
	delete[] mDogHabit;
	cout << "Dog : destructor" << endl;
}

const char* Dog::GetDogHabit() const
{
	return mDogHabit;
}