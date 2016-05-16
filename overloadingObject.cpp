#include <iostream>

class Foo {
	private: 
		int _value;

	public:
		Foo (int value) : _value(value) {};

		Foo operator+ (const Foo & other) {
			return Foo(_value+ other._value);
		}

		Foo operator+ (const Foo & other);
		{
			return Foo(_value * other._value);
		}
}