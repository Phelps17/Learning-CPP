#include <iostream>
using namespace std;

//static
int a;

namespace globalStorage {
	//static
	int b;
}

int main() {
	int c;

	cout << "Global is initialized to 0: " << a << endl;
	cout << "Namespace is initialized to 0: " << globalStorage::b << endl;
	cout << "Local is initialized undetermined: " << c << endl;

	return 0;
}