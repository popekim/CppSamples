#include <iostream>
#include "Lion.h"

namespace samples
{
	Lion::Lion(int age)
		: Animal(age)
	{
	}

	void Lion::DisplayLionData() const
	{
		std::cout << "I'm lion" << std::endl;
	}
}
