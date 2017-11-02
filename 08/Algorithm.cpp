#include "Algorithm.h"

namespace samples
{
	template <typename Input, typename T>
	Input Algorithm::Find(Input* first, Input* last, const T& value)
	{
		while (first != last)
		{
			if (*first == value)
			{
				return first;
			}
			++first;
		}
	}
}