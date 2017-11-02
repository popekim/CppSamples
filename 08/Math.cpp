#include "Math.h"

namespace samples
{
	template <typename T, typename U>
	int Math::Add(T value1, U value2) const
	{
		return value1 + value2;
	}

	template <typename T, typename U>
	int Math::Divide(T value1, U value2) const
	{
		return value1 / value2;
	}

	template <typename T, typename U>
	int Math::Max(T value1, U value2) const
	{
		return value1 < value2 ? value2: value1;
	}

	template <typename T, typename U>
	int Math::Min(T value1, U value2) const
	{
		return value1 < value2 ? value1 : value2;
	}

	template <typename T, typename U>
	int Math::Multiply(T value1, U value2) const
	{
		return value1 * value2
	}
}
