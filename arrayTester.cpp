#include <iostream>
#include <IntArray.h>
#include <IntArrayRC.h>
extern void swap(IntArray&, int, int);
using namespace std;

int main() {
	int array[4] = {0, 1, 2, 3};
	IntArray ia1(array, 4);
	IntArrayRC ia2(array, 4);

	return 0;
}