#pragma once

class Vector3
{
public:
	Vector3(int x, int y);

	int Multiply(const Vector3& reference) const;
	void Multiply(const int SCALAR);
	void PrintMember() const;

private:
	int mX;
	int mY;
};
