#include <iostream>
#include "Dog.h"

namespace samples
{
	Dog::Dog(int age, const char* name)
		: Animal(age)
	{
		size_t length = strlen(name + 1);
		mName = new char[length];
		memcpy(mName, name, length);
	}

	Dog::~Dog()
	{
		delete[] mName;
	}

	void Dog::Move() const
	{
		std::cout << "A dog is moving" << std::endl;
	}

	void Dog::Speak() const
	{
		std::cout << "Woof " << std::endl;
	}
}