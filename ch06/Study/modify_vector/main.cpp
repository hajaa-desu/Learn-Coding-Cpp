#include <iostream>
#include <stdlib.h>

#include <string>
#include <vector>


#include "modvector.h"


int main(int argc, char ** argv){
	std::vector<double> arrlist; 
	arrlist.push_back(12.99);
	arrlist.push_back(45.66);
	arrlist.push_back(44.55);
	arrlist.push_back(23.58);
	arrlist.push_back(36.77);
	arrlist.push_back(45.88);
	vect_print(arrlist, "Current items in list: ");
	vect_remove(3, arrlist);
	vect_remove(4, arrlist);
	vect_remove(0, arrlist);
	vect_print(arrlist, "New list: ");
	
	return 0;
}