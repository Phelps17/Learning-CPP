#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string myStr;
	float price = 0.0;
	int quantity = 0;

	cout << "Enter price: ";
	getline(cin, myStr);
	stringstream(myStr) >> price;

	cout << "Enter quantity: ";
	getline(cin, myStr);
	stringstream(myStr) >> quantity;

	cout << "Total Price: $" << price*quantity << endl;
	return 0;
}