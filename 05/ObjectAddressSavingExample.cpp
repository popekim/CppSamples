#include <iostream>
#include "ObjectAddressSavingExample.h"
#include "Tiger.h"

using namespace std;

namespace samples
{
	void ObjectAddressSavingExample()
	{
		Tiger* tiger1 = new Tiger(5);
		uint32_t* unit32Number = reinterpret_cast<uint32_t*>(tiger1);

		cout << unit32Number << endl; // you would save this on disk

		//then when you load it again
		Tiger* tiger2 = reinterpret_cast<Tiger*>(unit32Number);
		tiger2->PretendIAmAZibra();
	}
}