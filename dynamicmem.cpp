#include <iostream>
using namespace std;

int main() {

	//pointer to memory
	int *foo;
	//point it to an array of 5 integers
	foo = new int[5]; //this will throw an exception if there is an error
	//have to dereference for dynamic mem values
	foo[0] = 5;

	cout << "Value stored in foo[0]: " << foo[0] << endl;

	int *bar;
	bar = new (nothrow) int [4];
	if (bar == nullptr) {
		//this catches mem assigning exceptions
	}

	delete[] foo;
	delete[] bar;

	return 0;
}