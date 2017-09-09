#include <iostream>
#include "OperatorOverloadExample.h"
#include "Vector3.h"

using namespace std;

namespace samples
{
	void FunctionOverloadExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Function Overloading Example       |" << endl;
		cout << "+------------------------------+" << endl;
		
		Vector3 vector1(3, 5);
		Vector3 vector2(7, 9);
		const float DECIMAL = 0.5f;

		cout << "vector1 member variables - " << vector1 << endl;

		cout << "Result - Mutliply function (const Vector3&) - " << vector1.Multiply(vector1, vector2) << endl;
		cout << "Result - Mutliply function (const float DECIMAL) - " << vector1.Multiply(vector1, DECIMAL) << endl;

		cout << "vector1 member variables - " << vector1 << endl;
		
		vector1.Scale(vector1, vector2);
		cout << "Result - Scale function (const Vector3&) -  " << vector1 << endl;

		vector1.Scale(vector1, DECIMAL);
		cout << "Result - Scale function (const float DECIMAL) -  " << vector1 << endl;
	}
}