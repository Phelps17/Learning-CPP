#include <iostream>

int main( int argc, char **argv )
{
    int n = 0;

    std::cout << "Enter a side value for the square grid: ";
    std::cin >> n;

    int **array = new int *[n]; 

    for(int i=0; i<n; ++i )
        array[i] = new int[n];

    for(int i=0; i<n; ++i )
        for(int j=0; j<n; ++j )
            array[i][j] = i*n+j+1;

    for(int i=0; i<n; ++i ) {
    	for(int j=0; j<n; ++j ) {
    		std::cout << array[i][j] << "\t";
    	}
    	std::cout << std::endl;
    }
        
            

    for(int i=0; i<n; ++i )
        delete [] array[i];
    delete [] array;
}