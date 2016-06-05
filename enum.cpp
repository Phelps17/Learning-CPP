#include <iostream>
using namespace std;

//declare the enum values
//enums are directly mapped to ints
enum Colors {black, blue, green, cyan, red, purple, yellow, white};

int main() {
	//declaring as type Colors
	Colors mycolor;

	mycolor = blue;

	switch (mycolor) {
		case black:
			cout << "black" << endl;
			break;
		case blue:
			cout << "blue" << endl;
			break;
		default:
			break;
	}

	return 0;
}