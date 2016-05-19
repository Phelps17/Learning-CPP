#include <iostream>
using namespace std;

//namespace keep global variables out of the global scope
// by holding them in name spaces but they can still be accessed
//globally. good for avoiding name collisions
namespace foo {
	int value() {
		return 5;
	}
}

namespace bar {
	const double pi = 3.1416;
	double value() {
		return 2*pi;
	}
}

int main() {
	// The :: sign is used to call the val/func from the indicated namespace
	cout << "foo::value() = " << foo::value() << endl;
	cout << "bar::value() = " << bar::value() << endl;
	cout << "bar::pi = " << bar::pi << endl;

	return 0;
}