#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "InheritanceExample.h"

using namespace std;

namespace samples
{
	void InheritanceExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Inheritance Example       |" << endl;
		cout << "+------------------------------+" << endl;

		Cat cat(3, "Jumping");
		Dog dog(5, "Drooling");

		Cat* catPtr = &cat;
		Dog* dogPtr = &dog;

		cout << "Cat - " << "Age :" << catPtr->GetAge() << ", " << "Habit : " << catPtr->GetCatHabit() << endl;
		cout << "Dog - " << "Age : " << dogPtr->GetAge() << ", " << "Habit : " << dogPtr->GetDogHabit() << endl;
	}
}