#include "Vector4.h"

Vector4::Vector4(int x, int y)
	: mX(x)
	, mY(y)
{
}

int Vector4::operator*(const Vector4& reference) const
{
	return (reference.mX * reference.mY) + (mX * mY);
}