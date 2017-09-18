#pragma once

#include "Animal.h"

namespace samples
{
	class Cat : public Animal
	{
	public:
		Cat(int age, const char* name);
		~Cat();

		void Move() const;
		void Speak() const;

	private:
		char* mName;
	};
}
