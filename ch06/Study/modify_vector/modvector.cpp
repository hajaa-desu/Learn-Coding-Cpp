
#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include <string>
#include <vector>

#include "modvector.h"

int vect_remove(int i, std::vector<double>& vect) {
	int max_size = vect.size();
	if (i >= max_size) {
		std::cout << "ERROR: i is out of range." << std::endl;
		return EXIT_FAILURE;  
	}
	for (int k = i; k < max_size-1; k++){
		vect[k] = vect[k+1]; 
	}
	vect.pop_back();
	return 0; 
}

void vect_print(const std::vector<double>& vect, std::string message) {
	int max_size = vect.size(); 
	std::cout << message << std::endl;
	for (int i = 0; i < max_size; i++) {
		std::cout << std::setw(5) << i << " . " << vect[i] << std::endl; 
	}
}

void vect_add(double item, std::vector<double>& vect) {
	/* Find the position to place item. */
	int pos = 0; 
	while (vect[pos] < item) {
		pos++; 
	}
	if (pos == vect.size())
		vect.push_back(item);
	else {
		vect.push_back(vect[vect.size()-1]);
		for (int k = pos; k < vect.size()-2; k++) {
			vect[k+1] = vect[k]; 
		}
	}
}