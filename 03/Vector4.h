#pragma once

#include <iostream>

class Vector4
{
public:
	Vector4(int x, int y);

	int operator*(const Vector4& reference) const;
	friend void operator*(Vector4& vector, const int SCALAR);
	friend std::ostream& operator<<(std::ostream& ostream, const Vector4& vector);

private:
	int mX;
	int mY;
};

void operator*(Vector4& vector, const int SCALAR)
{
	vector.mX *= SCALAR;
	vector.mY *= SCALAR;
}

std::ostream& operator<<(std::ostream& ostream, const Vector4& vector)
{
	ostream << "mX : " << vector.mX << ", " << "mY : " << vector.mY << std::endl;
	return ostream;
}

