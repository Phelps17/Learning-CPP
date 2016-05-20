#include <iostream>
#include <new>
using namespace std;

int main() {
	int i, n;
	int *p;

	cout << "How many numbers would you like to enter? ";
	cin >> i;

	p = new (nothrow) int[i];
	if (p == nullptr) {
		cout << "Error: memory could nto be allocated";
	}
	else {
		for (n = 0; n < i; n++) {
			cout << "Enter number: ";
			cin >> p[n];
		}

		cout << "You have entered: " << endl;
		for (n = 0; n < i; n++) {
			cout << p[n] << ", ";
		}

		cout << endl;
		
		delete[] p;
	}

	return 0;
}