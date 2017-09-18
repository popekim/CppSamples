#pragma once

namespace samples
{
	class Animal
	{
	public :
		Animal(int age);
		virtual ~Animal();
		
		virtual void Move() const;
		virtual void Speak() const;

	private:
		int mAge;
	};
}