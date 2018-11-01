#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>


#include "read_data.h"


int read_data_from_file(const char* filename, std::vector<int>& dat){

	printf("Reading from %s ... \n", filename);

	std::ifstream infile;
	infile.open(filename); 
	int input = 0;
	int count = 0; 
	while (infile >> input) {
		dat.push_back(input);
		printf("\f[%2d] %4d \n", count, dat[count]); 
		count++; 
	}
	infile.close();

	return 0;
}
