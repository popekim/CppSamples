#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(int age, const char* catHabit);
	~Cat();

	const char* GetCatHabit() const;

private:
	char* mCatHabit;
};