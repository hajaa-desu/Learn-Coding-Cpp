#include <iostream>

const int SALARIES_CAPACITY = 100;

/* array parameters */
double maximum(const double a[], int a_size);
void update(double val, double a[], int& a_size, int max_size);

/* arrays can't be return types - the caller of the function must provide an array parameter to hold the result */ 
void between(double values[], int values_size, double low, double high, double result[], int& result_size); 
 
int main(int argc, char ** argv) {
	bool more = true;
	int salaries_size = 0;
	double salaries[SALARIES_CAPACITY];
	while (more && salaries_size < SALARIES_CAPACITY) {
		std::cout << "Enter salary " << salaries_size + 1 << ":";
		double x;
		std::cin >> x;
		if (std::cin.fail()){
			more = false;
			break;
		}
		if (x == 0) 
			break; 
		salaries[salaries_size] = x;
		salaries_size++; 
	}
	update(1200, salaries, salaries_size, SALARIES_CAPACITY);
	for (int i = 0; i < salaries_size; i++) {
		std::cout << salaries[i] << std::endl;
	}
	std::cout << "MAXIMUM IS: " << maximum(salaries, salaries_size) << std::endl; 
	double results[SALARIES_CAPACITY];
	int results_size = 0;  
	between(salaries, salaries_size, 1000, 2000, results, results_size); 
	std::cout << "Printing salaries between 1000 and 2000" << std::endl; 
	for (int i = 0; i < results_size; i++) {
		std::cout << results[i] << std::endl; 
	}
	return 0;
}

double maximum(const double a[], int a_size) {
	if (a_size == 0) return 0;
	double highest = a[0];
	int i;
	for (i = 1; i < a_size; i++) 
		if (a[i] > highest)
			highest = a[i]; 
	return highest; 
}

void update(double val, double a[], int& a_size, int max_size) {
	if (a_size != max_size) { 
		a[a_size] = val;
		a_size++;
	}
}

void between(double values[], int values_size, double low, double high, double result[], int& result_size) {
	for (int i = 0; i < values_size; i++) {
		if ((values[i] >= low) && (values[i] <= high)) {
			result[result_size] = values[i];
			result_size++; 
		}
	} 
}
