#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal()
{
	cout << "Animal : constructor" << endl;
}

Animal::Animal(int age)
	: mAge(age)
{
}

Animal::~Animal()
{
	cout << "Animal : destructor" << endl;
}

int Animal::GetAge() const
{
	return mAge;
}
