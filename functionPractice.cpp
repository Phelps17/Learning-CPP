#include <iostream>
#include <string.h>
using namespace std;

//functions can be declared before main and defined after
// this allows it to compile and makes the code more readable
int sum(int, int); //param names are not needed
void swap(int& a, int& b); // it wanted these named though
string concat(const string&, const string&);
inline string returnHi();


//defautl param vals can be used to supplement writing overloading statements
//it wouldnt let this one be defined later
int divide(int a, int b=2) {
	return a/b;
}

//this is just a sample recursion function
long factorial (long a) {
	if (a > 1) {
		return (a * factorial(a-1));
	}
	else return 1;
}

int main() {
	int a = 5;
	int b = 6;
	string sA = "Hello, ";
	string sB = "world!";

	cout << "int a: " << a << endl;
	cout << "int b: " << b << endl;
	cout << "String a: " << sA << endl;
	cout << "String b: " << sB << endl;


	cout << endl << "int c = sum(a,b)" << endl;
	int c = sum(a,b);
	cout << "int a: " << a << endl;
	cout << "int b: " << b << endl;
	cout << "int c: " << c << endl;
	cout << "String a: " << sA << endl;
	cout << "String b: " << sB << endl;

	cout << endl << "swap(a,c)" << endl;
	swap(a,c);
	cout << "int a: " << a << endl;
	cout << "int b: " << b << endl;
	cout << "int c: " << c << endl;
	cout << "String a: " << sA << endl;
	cout << "String b: " << sB << endl;

	cout << endl << "string sC = concat(sA, sB)" << endl;
	string sC = concat(sA, sB);
	cout << "int a: " << a << endl;
	cout << "int b: " << b << endl;
	cout << "int c: " << c << endl;
	cout << "String a: " << sA << endl;
	cout << "String b: " << sB << endl;
	cout << "String c: " << sC << endl;

	cout << endl << returnHi() << endl;

	cout << endl;
	cout << "divide(12) = " << divide(12) << endl;
	cout << "divide(12,3) = " << divide(12,3) << endl;

	cout << endl << "Facotrial Recursion" << endl;
	cout << "5! = " << factorial(5) << endl;
	cout << "1! = " << factorial(1) << endl;
	cout << "10! = " << factorial(10) << endl;
	
	return 0;
}

//adds 2 ints together
int sum (int a, int b) {
	return a+b;
}

//uses references to swap two ints
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//saves mem by using refs to concat 2 strings
//const so that it cant change the string vals
string concat(const string& a, const string& b) {
	return a+b;
}

//inline funcs can be used for really simple functions to optimize code
// compiler usually does this for you so it isnt necessary
inline string returnHi() {
	return "Hi.";
}