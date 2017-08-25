#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(int age, const char* name);
	~Cat();

	char* GetName() const;

private:
	char* mName;
};