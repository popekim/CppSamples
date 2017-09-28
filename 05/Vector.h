#pragma once

namespace samples
{
	class Vector
	{
	public:
		Vector();
		Vector(int x, int y);

		inline int GetX() const;
		inline void SetX(int x);

		inline int GetY() const;
		inline void SetY(int y);

		inline bool IsEqual(const Vector& v) const;
		inline Vector Multiply(const Vector& v) const;
		inline Vector Multiply(int multiplier) const;

		inline void Scale(const Vector& v);
		inline void Scale(int multiplier);

	private:
		int mX;
		int mY;
	};
}
