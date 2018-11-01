#include <iostream>
#include <vector>


#include <stdio.h>
#include <stdlib.h>


#include "read_data.h"
#include "perm.h"


int main(int argc, char ** argv){
	
	if (argc != 2) {
		fprintf(stderr, "Usage: %s n \n \t n \t The final element in a vector\n", argv[0]);
		return EXIT_FAILURE;
	}

	int n = atoi(argv[1]);

	std::vector<int> A;
	init_vect(A, n);
	print_vect(A, true);

	permute(A);
	return 0;
}