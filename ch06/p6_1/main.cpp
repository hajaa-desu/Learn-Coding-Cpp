#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
#include <vector>


#include "cal.h"


int main(int argc, char ** argv) {

	if (argc == 1) {
		printf("Alternately, usage: %s [data1] [data2]\n", argv[0]);
		printf("\t (...to read data from file)\n"); 
	}

	std::vector<double> A(MAX_CAPACITY); 
	std::vector<double> B(MAX_CAPACITY); 
	int A_size = 0;
	int B_size = 0; 

	/** Read data */ 
	

	if (argc == 1) {
		std::cout << "Reading into A: " << std::endl; 
		read_data(A, A_size, MAX_CAPACITY); 
		std::cout << "Reading into B: " << std::endl;
		read_data(B, B_size, MAX_CAPACITY);
	} else if (argc == 3) {
	/* Read the vector from a file */ 
		char* fnameA = argv[1];
		char* fnameB = argv[2]; 
		read_data_from_file(fnameA, A, A_size, MAX_CAPACITY);
		read_data_from_file(fnameB, B, B_size, MAX_CAPACITY); 
	}

	std::cout << "The scalar product is " << scalar_product(A, B, A_size, B_size) << std::endl; 
	
	std::cout << "The alternating sum is " << alternating_sum(A, A_size) << std::endl;
	
	std::cout << "Vector A is being reversed \n";  
	reverse(A, A_size);

	return 0; 
}

