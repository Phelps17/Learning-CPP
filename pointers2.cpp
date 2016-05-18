#include <iostream>
using namespace std;

int main() {

	//alloc a single object of type int
	//with initial value of 1024
	//ptr hold address of the int object
	int *ptr = new int(1024);
	
	//alloc an array of 4 ints
	//aptr holds the address of the first value in the array
	int *aptr = new int[4];

	//delete a pointer from memory
	delete ptr;
	
	//delete an array pointer from memory
	delete aptr;

	return 0;
}