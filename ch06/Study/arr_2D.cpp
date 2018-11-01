#include <iostream>
#include <iomanip>
#include <math.h>


const int COLS = 3;
const int ROWS = 10; 


int main(int argc, char ** argv) {
	double powers[ROWS][COLS]; 
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			powers[i][j] = pow(i+1, j);
			std::cout << std::setw(5) << powers[i][j];  
		}
		std::cout << std::endl; 
	}	
	return 0;
}
