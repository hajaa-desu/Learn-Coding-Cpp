/**

Exercise 6.12

Generate 10 random permutations from a vector [1, ..., 10]
*/ 

#include <iostream>
#include <vector>
#include <cstdlib>


#include "perm.h"


int main(int argc, char ** argv) {

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL));
	std::vector<int> vect( arr, arr + n );

	std::cout << "Items in the vector are: " << std::endl;
	print_vect(vect); 
	for (int i = 1; i <= 10; i++){
		print_perm(vect, i);	
	}
	
}