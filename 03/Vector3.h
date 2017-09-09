#pragma once

class Vector3
{
public:
	Vector3(int x, int y);
	Vector3 Multiply(Vector3& vector1, const Vector3& vector2);
	Vector3 Multiply(Vector3& vector1, const float DECIMAL);

	void Scale(Vector3& vector1, const Vector3& vector2);
	void Scale(Vector3& vector, const float DECIMAL);

	Vector3 operator*(const Vector3& vector)
	{
		Vector3 v(mX, mY);
		v.mX *= vector.mX;
		v.mY *= vector.mY;

		return v;
	}
	
	Vector3 operator*(const float DECIMAL)
	{
		Vector3 v(mX, mY);
		v.mX *= DECIMAL;
		v.mY *= DECIMAL;

		return v;
	}

	void operator*=(const Vector3& vector)
	{
		mX *= vector.mX;
		mY *= vector.mY;
	}

	void operator*=(const float DECIMAL)
	{
		mX *= DECIMAL;
		mY *= DECIMAL;
	}

	friend std::ostream& operator<<(std::ostream& ostream, const Vector3& vector);

private:
	int mX;
	int mY;
};


std::ostream& operator<<(std::ostream& ostream, const Vector3& vector)
{
	ostream << "mX : " << vector.mX << ", " << "mY : " << vector.mY << std::endl;
	return ostream;
}
