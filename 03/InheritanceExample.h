#pragma once

namespace samples
{
	// TODO:
	// 1. Complete Animal, Cat, Dog class in the lecture 3 slides (Look at "Inheritance" part in the slide)
		// Animal Class
			// Member Variable
				// int mAge
			// Two constructors
				// Parameterless
				// (int age)
			// Destructor
		// Cat Class
			// Inherits Animal as public
			// Member Variable
				// char* mName
			// Two constructors
				// Parameterless
				// (int age, const char* name)
			// Destructor
		// Dog Class
			// Inherits Animal as public
			// Member Variable
				// char* mSize - "Small" , "Medium". "Big"
			// Two constructors
				// Parameterless
				// (int age, const char* size)
			// Destructor
		// 1.1. In each constructor and destructor, print some text like bleow
			// In Animal class
				// "Animal - Constructor"
				// "Animal - Destructor"
			// In Cat class
				// "Cat - Constructor"
				// "Cat - Destructor"
			// In Dog class
				// "Dog - Constructor"
				// "Dog - Destructor"
		// 1.2. Create int GetAge() const in Animal Class
		// 1.3. Create char* GetName() const in Cat Class
		// 1.3. Create char* GetSize() const in Dog Class
	// 2. In InheritanceExample(), create one Cat* and Dog* type variable
		// 2.1. Then, print it's age, and name
		// 2.2. Finally, delete the Cat*
	void InheritanceExample();
}