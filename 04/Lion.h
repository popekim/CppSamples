#pragma once

#include "Animal.h"

namespace samples
{
	class Lion : public samples::Animal
	{
	public:
		Lion(int age);

		void DisplayLionData() const;
	};
}