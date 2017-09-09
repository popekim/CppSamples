#include "Vector4.h"

Vector4::Vector4(int vector1, int vector2)
	: mX(vector1)
	, mY(vector2)
{
}

int Vector4::operator*(const Vector4& vector) const
{
	return (vector.mX * vector.mY) + (mX * mY);
}