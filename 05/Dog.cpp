#include "Dog.h"

namespace samples
{
	Dog::Dog(int age, char* address)
		: Animal(age), mHomeAddress(address)
	{
	}

	const char* Dog::GetAddress() const
	{
		return mHomeAddress;
	}
}