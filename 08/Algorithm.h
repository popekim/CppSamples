#include <iostream>

#pragma once

namespace samples
{
	namespace Algorithm
	{
		template <typename Input, typename T>
		Input* Find(Input* first, Input* last, const T& value);
	};
};