#include <iostream>
using namespace std;

int main() {

	//make an array
	int fibon[9] = {0,1,1,2,3,5,8,13,21};
	int fibon2[9];

	cout << "Printing fibon sequence..." << endl;

	for (int i = 0; i < sizeof(fibon)/sizeof(fibon[0]); i++) {
		cout << fibon[i] << endl;
	}
	
	cout << "copying sequence to fibon2..." << endl;

	for (int i = 0; i < sizeof(fibon)/sizeof(fibon[0]); i++) {
		fibon2[i] = fibon[i];
	}

	cout << "Printing fibon2 sequence..." << endl;

	for (int i = 0; i < sizeof(fibon2)/sizeof(fibon2[0]); i++) {
		cout << fibon2[i] << endl;
	}

	return 0;
}