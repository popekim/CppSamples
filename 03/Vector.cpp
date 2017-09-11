#include <iostream>
#include "Vector.h"

namespace samples
{
	Vector::Vector()
		: Vector(0, 0)
	{
	}

	Vector::Vector(int x, int y)
		: mX(x)
		, mY(y)
	{
	}

	int Vector::GetX() const
	{
		return mX;
	}

	void Vector::SetX(int x)
	{
		mX = x;
	}

	void Vector::SetY(int y)
	{
		mY = y;
	}

	int Vector::GetY() const
	{
		return mY;
	}

	Vector Vector::Multiply(const Vector& v1)
	{
		Vector result(mX * v1.GetX(), mY * v1.GetY());

		return result;
	}

	Vector Vector::Multiply(int multiplier)
	{
		Vector result(mX * multiplier, mY * multiplier);

		return result;
	}

	void Vector::Scale(const Vector& v)
	{
		mX *= v.mX;
		mY *= v.mY;
	}

	void Vector::Scale(int multiplier)
	{
		mX *= multiplier;
		mY *= multiplier;
	}
}
