#include "PolymorphismExample.h"
#include "MultiInheritanceExample.h"
#include "InterfaceExample.h"

using namespace samples;

int main()
{
	// 1. Polymorphism 
	PolymorphismExample();

	// 2. Multiple Inheritance... YUCK
	MultiInheritanceExample();

	// 3. Multiplying with a Vector or Scalar in Vector Class
	InterfaceExample();

	return 0;
}