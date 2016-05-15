#include <iostream>

void swap_int(int *a, int *b) {
	std::cout << "--- SWAPPING ---" << std::endl;

	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char **argv) {
	int a = 5;
	int b = 7;
	int *pa = &a;
	int *pb = &b;

	std::cout << "a = " << a << " and b = " << b << std::endl;
	std::cout << "*pa = " << *pa << " and *pb = " << *pb << std::endl;

	swap_int(pa, pb);

	std::cout << "a = " << a << " and b = " << b << std::endl;
	std::cout << "*pa = " << *pa << " and *pb = " << *pb << std::endl;

	return 0;
}