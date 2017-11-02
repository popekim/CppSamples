#include <iostream>

#pragma once

namespace samples
{
	template <typename Input, typename T>
	class Algorithm
	{
	public:
		Input Find(Input* first, Input* last, const T& value);
	};
};