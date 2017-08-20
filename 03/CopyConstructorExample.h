#pragma once

namespace samples
{
	// TODO: 
	// 1. Create new class, "MyString"
		// Member Variables (private)
		// - const* mString;
		// - int mSize;
		// - int mCapacity;
		// 1.1. Create one constructor with one parameter
			// Use initializer list
			// parameter: const char* str
			// mSize: length of str
			// mCapacity: length of str
			// mString: str
				// Use memcpy()
		// 1.2. Create one copy constructor
			// parameter: const MyString& other
			// mSize: length of other.mString
			// mCapacity: length of other.mString
			// mString: other.mString
				// Use memcpy()
		// 1.3. Create one destructor(See p88 in Lecture 2)
		// 1.4. Create Print() function
			// Print mString
	// 2. In CopyConstructorExample(), create two MyString Variable
		// MyString myName("Any name");
		// MyString myNameCopy(myName);
		// 2.1 Print myName and myNameCopy
	void CopyConstructorExample();
}