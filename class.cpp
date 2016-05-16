#include <iostream>

class Foo{
	public:
		Foo (void) {
			std::cout << "Foo constructor 1 called" << std::endl;
		}
		Foo (int value) {
			std::cout << "Foo constructor 2 called" << std::endl;
		}

		~Foo (void) {
			std::cout << "Foo destructor called" << std::endl;
		}
};

int main(int argc, char **argv) {
	Foo foo;
	Foo foo_2(2);

	return 0;
}