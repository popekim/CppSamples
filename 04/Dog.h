#pragma once

#include "Animal.h"

namespace samples 
{
	class Dog : public Animal
	{
	public:
		Dog(int age, const char* name);
		~Dog();

		void Move() const;
		void Speak() const;

	private:
		char* mName;
	};
}