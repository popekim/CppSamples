#pragma once

#include <iostream>

namespace samples
{
	class Vector2
	{
	public:
		Vector2();
		Vector2(int x, int y);

		inline int GetX() const;
		inline void SetX(int x);

		inline int GetY() const;
		inline void SetY(int y);

		inline bool operator==(const Vector2& rhs) const;

		inline Vector2 operator*(const Vector2& rhs) const;
		inline Vector2 operator*(int multiplier) const;
		friend inline Vector2 operator*(int multiplier, const Vector2& v);

		inline Vector2& operator*=(const Vector2& rhs);
		inline Vector2& operator*=(int multiplier);

		friend inline std::ostream& operator<<(std::ostream& out, const Vector2& vector);

	private:
		int mX;
		int mY;
	};
}



