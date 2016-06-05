#include <iostream>
using namespace std;

class Dummy {
public:
	bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)
{
	//'this' refers to the object who's method is currently being ran
	if (&param == this) {
		return true;
	}
	else return false;
}

int main () {
	Dummy a;
	Dummy* b = &a;

	if ( b->isitme(a) ) {
		cout << "yes, &a is b" << endl;
	}

	return 0;
}