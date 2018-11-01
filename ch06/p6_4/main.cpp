#include <iostream>
#include <iomanip>
#include <stdio.h> 
#include <stdlib.h>
#include <vector>


#include "read_data.h"
#include "cal.h"

int main(int argc, char ** argv) {
	if (argc != 3) {
		printf("Usage: %s file1 file2\n", argv[0]);
		return EXIT_FAILURE;
	}

	std::vector<int> A;
	std::vector<int> B;
	read_data_from_file(argv[1], A);
	read_data_from_file(argv[2], B);

	std::cout << "Appending ... " << std::endl;
	std::vector<int> AB = append(A, B);
	print_vector(AB);

	std::cout << "Merging ... " << std::endl;
	std::vector<int> A_B = merge(A, B);
	print_vector(A_B);

	std::cout << "Merge and sort ... " << std::endl;
	std::vector<int> A_B_sorted = merge_sorted(A, B); 
	print_vector(A_B_sorted);

	std::string stat = equals(A, B)? "equal": "not equal";
	std::cout << "The two vectors are " << stat << "." << std::endl;

	stat = same_set(A, B)? "identical": "not identical"; 
	std::cout << "The two vectors are " << stat << " sets." << std::endl;

	stat = same_elements(A, B)? "same": "not the same";
	std::cout << "The two vectors are " << stat << " in multiplicity and partial order." << std::endl;
	
	std::cout << "Removing duplicates from A ... " << std::endl;
	remove_duplicates(A); 
	print_vector(A);
	return 0; 
}