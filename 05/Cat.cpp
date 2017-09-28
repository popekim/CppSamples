#include "Cat.h"

namespace samples
{
	Cat::Cat(int age, char* name)
		: Animal(age), mName(name)
	{
	}

	const char* Cat::GetName() const
	{
		return mName;
	}
}