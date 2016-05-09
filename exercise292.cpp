#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	//char
	char c = 'c';

	//pointer to a char
	char * p1 = new char;

	//a constant pointer to a char
	char * const p2 = p1;

	//a pointer to a constant char
	const char * p3 = p1;

	//a constant pointer to a constant char
	const char * const p4 = p2;

	//a reference to a char
	char & r1 = *p2;

	//a refernce to a constant char
	const char & r2 = * p4;

// To have no warning at compilation for unused variables
	if( *p3 == r1 ) { 
	}
	if( *p3 == r2 ) { 
	}

	return 0;
}