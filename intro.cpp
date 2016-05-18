#include <iostream>
using namespace std;

//needed for string objects
#include <string>
//needed for vector objects
#include <vector>

//sample functions
void readIn() {
	cout << "readIn()" << endl;
}

void sort() {
	cout << "sort()" << endl;
}
void compact() {
	cout << "compact()" << endl;
}
void print(string output) {
	cout << "print()	" << output << endl;
}

//main function
int main() {
	//primitives
	int age = 10;
	double price = 19.99;
	char suffix = 'p';
	bool found = false;

	//declared object types
	string current_chapter = "Introduction";
	vector<string> chapter_titles(20);

	//function calls
	readIn();
	sort();
	compact();
	print(current_chapter);

	return 0;
}