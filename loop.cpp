#include <iostream>
using namespace std;

int main() {
	int iterations = 0;
	bool continue_loop = true;

	while (continue_loop) {
		if (iterations < 5) {
			cout << iterations << endl;
			iterations++;
		}
		else continue_loop = false;
	}

	cout << endl;

	for( int a = 10; a < 20; a = a + 1 )
	{
		cout << "value of a: " << a << endl;
	}


	return 0;
}