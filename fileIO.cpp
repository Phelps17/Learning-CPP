#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	
	//try to open an output file
	ofstream outfile("outFile.txt");

	//check if it was opened
	if (!outfile) {
		cerr << "Sorry! We were unable to open the output file!" << endl;
		return -1;
	}

	//try to open an input file 
	ifstream infile("inFile.txt");

	//check if it were opened
	if (!infile) {
		cerr << "Sorry! We were unable to open the input file!" << endl;
		return -2;
	}

	string word;
	while (infile >> word) {
		outfile << word << " ";
		cout << word << " ";
	}

	outfile << endl;
	cout << endl;

	return 0;
}