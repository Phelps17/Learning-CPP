#include <iostream>
#include <string>
using namespace std;

//this is a template declaration
//it is essntially a great overloading statement
//the header could also be written: template <class T>
//because 'class' and 'typename' are synonymous in this case 
//and TypeName doesnt matter either, its a placeholer
template <typename SomeType> 
SomeType sum(SomeType a, SomeType b) {
	return a+b;
}

int main() {
	int a = 5;
	int b = 2;

	double c = 5.5;
	double d = 11.12;

	string e = "hello, ";
	string f = "world!";

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "a + b = " << sum<int>(a,b) << endl;

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "c + d = " << sum<double>(c,d) << endl;

	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "e + f = " << sum<string>(e,f) << endl;

	return 0;
}