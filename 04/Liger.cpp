#include <iostream>
#include "Liger.h"

namespace samples
{
	Liger::Liger(int age)
		: Lion(age), Tiger(age)
	{
	}

	void Liger::DisplayLigerData() const
	{
		std::cout << "I'm liger" << std::endl;
	}
}