#include <iostream>
#include "Vector3.h"


Vector3::Vector3(int x, int y)
	: mX(x)
	, mY(y)
{
}

int Vector3::Multiply(const Vector3& reference) const
{
	return (reference.mX * reference.mY) + (mX * mY);
}

void Vector3::Multiply(const int SCALAR)
{
	mX *= SCALAR;
	mY *= SCALAR;
}

void Vector3::PrintMember() const
{
	std::cout  << "mX : " << mX << ", " << "mY : " << mY << std::endl;
}