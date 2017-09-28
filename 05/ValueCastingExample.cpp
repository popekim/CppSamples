#include<iostream>
#include "ValueCastingExample.h"

using namespace std;

namespace samples
{
	void ValueCastingExample()
	{
		int number1 = 10;
		short number2 = 20;
		float number3 = 5.5f;

		cout << "int variable (hex) : " << hex << number1<< endl;
		cout << "short variable (hex): " << hex << number2 << endl;
		cout << "float variable (hex): " << hex << number3 << endl;

		float intToFloat = static_cast<float>(number1);
		int shortToInt = static_cast<int>(number2);
		int floatToInt = static_cast<int>(number3);

		cout << "int variable -> float variable (hex): " << hex << intToFloat << endl;
		cout << "short variable -> int variable (hex): " << hex << shortToInt << endl;
		cout << "float variable -> int variable (hex): " << hex << floatToInt << endl;
	}
}