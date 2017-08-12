#pragma once

namespace samples
{
	// 1. Create Vector class with header and cpp files (name: Vector2)
	// 2. In header, declare Vector1 class which includes
		// two private member variables
			// mX (type: int)
			// mY (type: int)
		// two public constructors (look at p72 in the slide)
			// Vector2()
			// Vector2(int x, int y)
		// public member functions
			// void SetX(int x), void SetY(int y)
			// int GetX(), int GetY()
			// void Add(const Vector2& vec)
		// public destructors
			// ~Vector2()
	// 3. In cpp, implement Vector1 class
		// - use initializer list in the both constructors
	// 4. In VectorExample1() function, create two Vector2 objects 
		// e.g.)
		// Vector2 v1;
		// Vector2 v2(13, 4);
	// 5. Print x and y in the both v1 and v2 by using GetX()/GetY() 
	// 6. Then, set x and y in v1 by using SetX()/SetY()
	// 7. Next, Add v2 to v1 by using Add()
	// 8. Finally, print again x and y in the both v1 and v2 by using GetX()/GetY() 
	void VectorExample2();
}