#include <iostream>
#include<string>
#include "MirrorString.h"

using namespace std;

namespace samples
{
	void MirrorStringExample()
	{
		string line = "Hello World!";

		for (size_t i = line.length(); i--> 0;)
		{
			line += line[i];
		}
		cout << line << endl;
	}
}