#pragma once

namespace samples
{
	class Vector
	{
	public:
		Vector();
		Vector(int x, int y);

		int GetX() const;
		void SetX(int x);

		int GetY() const;
		void SetY(int y);
		
		Vector Multiply(const Vector& v);
		Vector Multiply(int multiplier);

		void Scale(const Vector& v);
		void Scale(int multiplier);

	private:
		int mX;
		int mY;
	};
}
