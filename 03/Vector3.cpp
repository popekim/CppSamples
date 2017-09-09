#include <iostream>
#include "Vector3.h"


Vector3::Vector3(int x, int y)
	: mX(x)
	, mY(y)
{
}

Vector3 Vector3::Multiply(Vector3& vector1, const Vector3& vector2)
{
	return vector1* vector2;
}

Vector3 Vector3::Multiply(Vector3& vector1, const float DECIMAL)
{
	return vector1 * DECIMAL;
}

void Vector3::Scale(Vector3& vector1, const Vector3& vector2)
{
	vector1 *= vector2;
}

void Vector3::Scale(Vector3& vector, const float DECIMAL)
{
	vector *= DECIMAL;
}

