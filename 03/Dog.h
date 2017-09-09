#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(int age, const char* dogHabit);
	~Dog();

	const char* GetDogHabit() const;

private:
	char* mDogHabit;
};