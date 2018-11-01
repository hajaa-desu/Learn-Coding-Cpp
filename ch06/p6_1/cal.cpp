#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <assert.h> 
#include <math.h>
#include <vector>



#include "cal.h"


double scalar_product(const std::vector<double>& a, const std::vector<double>& b, int a_size, int b_size){
	assert(a_size == b_size); 
	double sum = 0.0; 
	for (int i = 0; i < a_size; i++){
		sum += (a[i] * b[i]); 
	} 	
	return sum; 
}

double alternating_sum(const std::vector<double>& dat, int dat_size){
	double sum = dat[0]; 
	printf("%4.2f", dat[0]);
	for (int i=1; i < dat_size; i++){		
		if ((i % 2) == 0) {
			sum += dat[i];
			printf("+%4.2f", dat[i]);
		} else {
			sum -= dat[i];
			printf("-%4.2f", dat[i]);
		}
	}
	std::cout << " = ";
	return sum;
}

void swap(double& a, double &b) {
	double temp = a;
	a = b; 
	b = temp;  
}

void reverse(std::vector<double>& arrlist, int arr_size){
	std::cout << "\tOld ";
	print_vect(arrlist, arr_size); 
	int i = 0;
	int j = arr_size - 1;  
	std::cout << "Reversing ...\n";
	while (i < j){
		swap(arrlist[i++], arrlist[j--]);
	}
	std::cout << "\tNew ";
	print_vect(arrlist, arr_size);

}

int read_data(std::vector<double>& dat, int& dat_size, int max_capacity){
	int more = true; 
	std::cout << "Please enter 0 to stop entering numbers" << std::endl;
	int i = 0; 
	for (; i<dat_size; i++) {
		printf("%4d>", i);
		std::cout << dat[i];  
	}
	while (more && (dat_size < max_capacity)) {
		double input; 
		printf("%4d>", dat_size); 
		std::cin >> input;
		if (std::cin.fail()) {
			fprintf(stderr, "Invalid input"); 
			return -1;
		} 
		if (input == 0) {
			more = false; 
		} else {
			dat[dat_size] = input; 
			dat_size++; 
		}
	}
	return 0;
}

int read_data_from_file(const char* filename, std::vector<double>& dat, int& dat_size, int max_capacity) {
	std::cout << "Reading from " << filename << std::endl;
	int i = 0; 
	for (; i<dat_size; i++) {
		printf("%4d>", i);
		std::cout << dat[i];  
	}
	
	std::ifstream infile;
	infile.open(filename); 
	double input = 0.0;
	while ((infile >> input) && (dat_size < max_capacity)) {
		dat[dat_size] = input;
		printf("%4d> %4.2f\n", dat_size, dat[dat_size]);
		dat_size++; 
	}

	infile.close();

	return 0;
}

void print_vect(const std::vector<double>& vect, int vect_size) {
	std::cout << "vector content: "; 
	std::cout << std::setprecision(2) << std::fixed; 
	for (int i = 0; i < vect_size; i++) {
		std::cout << std::setw(6) << vect[i]; 
	}
	std::cout << std::endl;
}
