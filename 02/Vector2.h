#pragma once

class Vector2
{
public:
	Vector2();
	Vector2(int x, int y);
	~Vector2();
	int GetX() const;
	int GetY() const;
	void Add(const Vector2& vector);
	void SetX(int x);
	void SetY(int Y);

private:
	int mX;
	int mY;
};