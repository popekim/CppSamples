#include <iostream>
#include "Tiger.h"

namespace samples
{
	Tiger::Tiger(int age)
		: Animal(age)
	{
	}

	void Tiger::DisplayTigerData() const
	{
		std::cout << "I'm tiger" << std::endl;
	}
}