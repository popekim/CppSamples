#include <iostream>
#include "CopyConstructorExample.h"
#include "MyString.h"

using namespace std;

namespace samples
{
	void CopyConstructorExample()
	{
		cout << "+------------------------------+" << endl;
		cout << "|       Copy Constructor example       |" << endl;
		cout << "+------------------------------+" << endl;

		MyString myName("	John Doe");
		MyString myNameCopy(myName);
	
		myName.PrintString();
		myNameCopy.PrintString();
	}
}
