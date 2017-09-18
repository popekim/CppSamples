#include <iostream>
#include "Cat.h"

namespace samples
{
	Cat::Cat(int age, const char* name) 
		: Animal(age)
	{
		size_t length = strlen(name + 1);
		mName = new char[length];
		memcpy(mName, name, length);
	}

	Cat::~Cat()
	{
		delete[] mName;
	}

	void Cat::Move() const
	{
		std::cout << "A cat is moving" << std::endl;
	}

	void Cat::Speak() const
	{
		std::cout << "Meow " << std::endl;
	}
}