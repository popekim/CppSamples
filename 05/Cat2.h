#pragma once

namespace samples
{
	class Cat2
	{
	public:
		Cat2::Cat2(int age, char* name);

		char* GetType() const;

	private:
		static char* mAnimalType;

		int mAge;
		char* mName;
	};
}