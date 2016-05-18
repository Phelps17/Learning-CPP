#include <iostream>
using namespace std;

int main() {
	//create a value and a pointer
	int val1 = 23;
	int val2 = 12;
	int *pointer;

	//point it to the address of val1
	pointer = &val1;

	cout << "Value of val1: " << val1 << endl;
	cout << "Address of val1: " << &val1 << endl;
	cout << "Value of what pointer is pointing to: " << *pointer << endl;
	cout << "Address of what pointer is pointing to: " << pointer << endl;
	cout << "Address of the pointer itself: " << &pointer << endl;

	//indirectly add 1 to value of val1
	*pointer = *pointer + 1;
	cout << endl << "*pointer = *pointer + 1;" << endl;
	cout << "------------------------------" << endl;

	cout << "Value of val1: " << val1 << endl;
	cout << "Address of val1: " << &val1 << endl;
	cout << "Value of what pointer is pointing to: " << *pointer << endl;
	cout << "Address of what pointer is pointing to: " << pointer << endl;
	cout << "Address of the pointer itself: " << &pointer << endl;

	return 0;
}