#include <iostream>
using namespace std;

//define
#define SQUARE(x) x*x

//constant
const int two = 2;

//macro
int inline square(int x) {
	return x*x;
}

int main(int argc, char **argv) {
	cout << SQUARE(6) << endl;

	cout << square(two) << endl;

	return 0;
}