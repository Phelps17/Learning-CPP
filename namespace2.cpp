#include <iostream>
using namespace std;

namespace first {
	int x = 1;
	int y = 2;
}

namespace second {
	int x = 5;
	int y = 6;
}

int main() {
	//"using" eliminates the need to specify using ::
	using first::x;
	using second::y;

	cout << x << endl;
	cout << y << endl;
	cout << second::x << endl;
	cout << first::y << endl;

	return 0;
}