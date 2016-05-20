#include <iostream>
using namespace std;

struct movies_t {
	string title;
	int year;
};

struct friends_t {
	string name;
	string email;
	movies_t favorite_movie;
} charlie, maria;

friends_t * pfriends = &charlie;

int main() {
	charlie.name = "Charlie";
	maria.favorite_movie.title = "Jaws";
	charlie.favorite_movie.title = "qwertyasdf";
	charlie.favorite_movie.year = 1234;

	cout << charlie.name << endl;
	cout << maria.favorite_movie.title << endl;
	cout << charlie.favorite_movie.year << endl;
	cout << pfriends->favorite_movie.year << endl;
	cout << (*pfriends).favorite_movie.title << endl;

	return 0;
}