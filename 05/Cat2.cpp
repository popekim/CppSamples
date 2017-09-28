#include <iostream>
#include "Cat2.h"

namespace samples
{
	Cat2::Cat2(int age, char* name)
		: mAge(age), mName(name)
	{
	}

	char* Cat2::GetType() const
	{
		return mAnimalType;
	}

	char* Cat2::mAnimalType = "Cat";
}