#include <iostream>
using namespace std;

class Rectangle {
	//members are private by default
	int width, height;

	//these members are public
public:
	//constructor
	Rectangle(int a, int b) {
		width = a;
		height = b;
	}
	//overloading the constructor
	Rectangle() {
		width = 0;
		height = 0;
	}

	void set_values(int,int); //declare but dont define

	//declare and define
	int area() {
		return height*width;
	}
};

//the definition must be scoped through the class
void Rectangle::set_values (int x, int y) {
	width = x;
	height = y;
}


int main() {
	Rectangle rect(2,2);
	cout <<"Area: " << rect.area() << endl;

	rect.set_values(3,4);
	cout <<"Area: " << rect.area() << endl;
	
	//default constructor doesnt use ()
	Rectangle rect2;

	return 0;
}