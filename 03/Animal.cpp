#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()
	: mAge(0)
{
	cout << "Animal : constructor" << endl;
}

Animal::Animal(int age)
	: mAge(age)
{
}

int Animal::GetAge() const
{
	return mAge;
}
