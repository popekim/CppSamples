#pragma once

namespace samples
{
	template <typename T, typename U>
	class Math
	{
	public:
		int Add(T value1, U value2) const;
		int Divide(T value1, U value2) const;
		int Max(T value1, U value2) const;
		int Multiply(T value1, U value2) const;
		int Min(T value1, U value2) const;
	};
}