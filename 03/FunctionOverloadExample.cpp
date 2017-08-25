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

		const int SCALAR = 8;
		
		vector1.PrintMember();
		vector2.PrintMember();

		cout << "Result (Dot product) : " << vector1.Multiply(vector2);

		vector1.Multiply(SCALAR);
		cout << "Result (Scalar Multiplication) : " << "Vector1: " ;
		vector1.PrintMember();
	}
}