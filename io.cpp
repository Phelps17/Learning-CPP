#include <iostream>
#include <string>

int main(int argc, char **argv) {
		
	int i;

	std::cout << "Hello World!" << std::endl;

	std::cout << "Please enter an integer value: ";
	std::cin >> i;

	std::cout << "The value you entered is " << i << "!" << std::endl;

	return 0;
}