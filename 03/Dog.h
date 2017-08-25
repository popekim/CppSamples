#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(int age, const char* size);
	~Dog();

	char* GetSize() const;

private:
	char* mSize;
};