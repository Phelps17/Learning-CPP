#include <iostream>
using namespace std;

class Dummy {
public:
	static int n;
	//increase n for every dummy defined
	Dummy() {
		n++;
	}
};

//static variables must be defined outside of the scope like so
int Dummy::n = 0;

int main() {
	//create 1 dummy
	Dummy a;
	//create an array of 5 more dummies
	Dummy b[5];

	cout << a.n << endl;

	//store a new DUmmy in dynamic memory
	Dummy *c = new Dummy;
	cout << Dummy::n << endl;

	//clear memory
	delete c;

	return 0;
}