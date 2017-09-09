#include <iostream>
#include "OperatorOverloadExample.h"
#include "Vector4.h"

using namespace std;

namespace samples
{
	void OperatorOverloadExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Operator Overloading Example       |" << endl;
		cout << "+------------------------------+" << endl;
	
		Vector4 vector1(3, 5);
		Vector4 vector2(7, 9);

		const int SCALAR = 8;

		cout << "vector1 member variables : " << vector1 << endl;

		cout << "Result - Dot product : " << vector1 * vector2<< endl;
		
		vector1 * SCALAR;
		cout << "Result - Scalar Multiplication : " << vector1 << endl;
	}
}