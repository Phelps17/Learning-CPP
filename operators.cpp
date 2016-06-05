#include <iostream>
using namespace std;

class CVector {
public:
	int x,y;
	//constructors
	CVector() {};
	CVector(int a, int b) {
		x = a;
		y = b;
	}
	//overload the operator
	//giving it a ref to the vector to save mem and using 
	//const to not edit the vector
	CVector operator + (const CVector&);
	CVector operator - (const CVector&);
};

CVector CVector::operator + (const CVector& param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;

	return temp;
}

CVector CVector::operator - (const CVector& param) {
	CVector temp;
	temp.x = x - param.x;
	temp.y = y - param.y;

	return temp;
}

int main() {
	CVector foo(3,1);
	CVector bar(1,2);

	CVector result = foo + bar;
	cout << result.x << ", " << result.y << endl;

	result = foo - bar;
	cout << result.x << ", " << result.y << endl;

	return 0;
}