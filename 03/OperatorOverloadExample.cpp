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

		const int SCALRA = 8;

		cout << "Result (Dot product) : " << vector1 * vector2<< endl;
		
		cout << "Before doing Scalar Multiplication : " << "Vector1: " << vector1 << endl;
		vector1 * SCALRA;
		cout << "Result (Scalar Multiplication) : " << "Vector1 : " << vector1 << endl;
	}
}