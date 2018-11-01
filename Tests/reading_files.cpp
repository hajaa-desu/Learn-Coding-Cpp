#include <stdio.h>
#include <stdlib.h>


#include <iostream>
#include <fstream>


int main(int argc, char ** argv) {

	if (argc < 2) {
		fprintf(stderr, "Usage: %s <file name> \n", argv[0]);
		return EXIT_FAILURE; 
	}

	char* filename = argv[1];

	/* Opening a file and reading from it*/
	std::ifstream infile;
	infile.open(filename);

	int data = 999; 
	printf("Reading from %s ... \n", filename); 
	while (infile >> data) {
		std::cout << data << std::endl;
	}

	infile.close();


	return 0; 
}