#pragma once

namespace samples
{
	// TODO
	// 1. Create a class, vector4 (Using Vector3)
		// 1.1. Do not copy Multiply() and Print() functions
		// 1.2. Overload operator*() to calculate Dot product (Vector * Vector)
			// member function version
		// 1.3. Overload operator*() to calculate Scalar multiplication (Vector * Scalar)
			// non-momber function version
		// 1.3. Overload operator<<() to print mX and mY
			// non-member function version
			// e.g) std::cout << vector1 << std::endl;
			// the result in the console window: (10, 20)
	// 2. In OperatorOverloadExample(), call two multiply() functions
		// 2.1. And, print the results
	void OperatorOverloadExample();
}