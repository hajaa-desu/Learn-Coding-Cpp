#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>

#include "perm.h"

/** Prints a permutation of vect.

@param vect A vector.
@param id The id of vector. 
*/
void print_perm(std::vector<int>& vect, int id) {
	
	int n = vect.size(); 

	std::vector<int> idx;
	idx.reserve(n); 
	for ( int i = 0; i < n; i++ ) {
		idx.push_back(i);
	}

	std::cout << "Permutation " << std::setw(3) << id << " : "; 
	while (n != 0) {
		int i = rand() % n; 
		std::cout << std::setw(3) << vect[idx[i]];
		idx.erase(idx.begin() + i);
		n--; 
	}
	std::cout << std::endl;

}

void print_vect(const std::vector<int>& vect) {
	int n = vect.size();
	for (int i = 0; i < n; i++) {
		std::cout << "[" << i << "] " << vect[i] << std::endl;
	}
}