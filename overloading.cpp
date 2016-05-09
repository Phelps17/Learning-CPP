#include <iostream>
using namespace std;

float add(float a, float b) {
	return a+b;
}

float add(int a, int b) {
	return a+b;
}

int main(int argc, char **argv) {
	float a = 5.67;
	float b = 4.55;

	int c, d;

	c = 4;
	d = 7;

	cout << "a + b = " << add(a,b) << endl;
	cout << "c + d = " << add(c,d) << endl;

	return 0;
}