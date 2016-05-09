#include <iostream>
using namespace std;


float foo(float a=0, float b=1, float c=2) {
	return a+b+c;
}

int main(int argc, char **argv) {
	cout << foo(1) << endl 
	<< foo(1,2) << endl
	<< foo(1,2,3) << endl;

	return 0;
}

