#include "CopyingVectorExample.h"
#include "MathClassExample.h"
#include "MyArrayExample.h"
#include "FixedVectorExample.h"
#include "FindFunctionExample.h"

using namespace samples;

int main()
{
	// 1. Array
	MyArrayExample();

	// 2. FixedVector
	FixedVectorExample();

	// 3. Math Class
	MathClassExample();

	// 4. Copying vector
	CopyingVectorExample();

	// 5. Find function
	FindFunctionExample();

	return 0;
}