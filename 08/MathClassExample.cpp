#include <iostream>
#include "Math.h"
#include "MathClassExample.h"

using namespace std;

namespace samples
{
	void MathClassExample()
	{
		Math<int, int> math;

		int value1 = 15;
		int value2 = 3;

		cout << math.Add(value1, value2) << endl;
		cout << math.Divide(value1, value2) << endl;
		cout << math.Multiply(value1, value2) << endl;
		cout << math.Max(value1, value2) << endl;
		cout << math.Min(value1, value2) << endl;
	}
}