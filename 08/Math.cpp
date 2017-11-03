#include "Math.h"

namespace samples
{
	namespace Math
	{
		template <typename T>
		int Add(T value1, T value2)
		{
			return value1 + value2;
		}

		template <typename T>
		int Divide(T value1, T value2)
		{
			return value1 / value2;
		}

		template <typename T>
		int Max(T value1, T value2)
		{
			return value1 < value2 ? value2 : value1;
		}

		template <typename T>
		int Min(T value1, T value2)
		{
			return value1 < value2 ? value1 : value2;
		}

		template <typename T>
		int Multiply(T value1, T value2)
		{
			return value1 * value2
		}
	}
}
