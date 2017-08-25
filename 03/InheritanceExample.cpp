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

		Cat cat(3, "Kitty");
		Dog dog(5, "Puppy");

		Cat* catPtr = new Cat;
		Dog* dogPtr = new Dog;

		catPtr = &cat;
		dogPtr = &dog;

		cout << "Cat - " << "Age :" << catPtr->GetAge() << ", " << "Name : " << catPtr->GetName() << endl;
		cout << "Dog - " << "Age : " << dogPtr->GetAge() << ", " << "Size : " << dogPtr->GetSize() << endl;

		delete[] catPtr;
		delete[] dogPtr;

		cat.~Cat();
		dog.~Dog();
	}
}