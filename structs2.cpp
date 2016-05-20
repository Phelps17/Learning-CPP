#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
} mine, yours;

void printMovie(movies_t movie);

int main() {
	string myStr;

	mine.title = "Star Wars III";
	mine.year = 2006;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, myStr);
	stringstream(myStr) >> yours.year;

	cout << "My favorite movie is: " << endl;
	printMovie(mine);
	cout << "Your favorite movie is: " << endl;
	printMovie(yours);

	return 0;
}

void printMovie (movies_t movie) {
	cout << movie.title << " - " << movie.year << endl;
}