#include <iostream>
using namespace std;

//create a data structure called product
struct product {
	int weight;
	double price;
} apple, banana; //<- those are both declarations of products

//this creates a melon of type product
product melon;

//Note: These are all global...

int main() {
	//members can be accessed directly with '.' notation
	apple.weight = 5;
	banana.weight = 5;
	melon.weight = 25;

	apple.price = 0.5;
	banana.price = 0.33;
	melon.price = 3.55;

	return 0;
}