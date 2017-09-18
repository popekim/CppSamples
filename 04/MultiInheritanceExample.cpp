#include "Liger.h"
#include "MultiInheritanceExample.h"

namespace samples
{
	void MultiInheritanceExample()
	{
		Liger liger(5);

		liger.DisplayLionData();
		liger.DisplayTigerData();
		liger.DisplayLigerData(); 
	}
}