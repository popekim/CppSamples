#pragma once

namespace samples
{
	// 1. Create Vector class with header and cpp files (name: Vector1)
	// 2. In header, declare Vector1 class which includes
		// two private member variables
			// mX (type: int)
			// mY (type: int)
		// two public constructors (look at p72 in the slide)
			// Vector1()
			// Vector1(int x, int y)
	// 3. In cpp, implement Vector1 class
		// - use initializer list in the both constructors
		// - print mX and mY in the both constructors
			// e.g.) 
			// Vector1::Vector1()
			// {
			//		cout << "Vector1()" << endl <<"mX: " << mX << endl << "mY: " << mY << endl;
			// }
	// 4. Finally, create two Vector1 objects in VectorExample1() function
		// e.g.)
		// Vector1 v1;
		// Vector1 v2(10, 55);
	void VectorExample1();
}