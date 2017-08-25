#pragma once

class Animal
{
public:
	Animal();
	Animal(int age);
	~Animal();

	int GetAge() const;

private:
	int mAge;
};