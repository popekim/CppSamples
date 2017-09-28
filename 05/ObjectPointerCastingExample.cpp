#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "ObjectPointerCastingExample.h"

using namespace std;

namespace samples
{
	void ObjectPointerCastingExample()
	{
		Animal* myPet1 = new Cat(2, "Lulu");
		Animal* myPet2 = new Dog(2, "BCIT");
	
		Cat* myCat = static_cast<Cat*>(myPet1);
		Dog* myDog1 = static_cast<Dog*>(myPet2);
		Dog* myDog2 = static_cast<Dog*>(myPet1);

		cout << "myCat's name : " << myCat->GetName() << endl;
		cout << "myDog1's address :" << myDog1->GetAddress() << endl;
		cout << "myDog2's address : " << myDog2->GetAddress() << endl;
	}
}