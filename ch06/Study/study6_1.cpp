#include <iostream>
#include <iomanip>


#include <iostream>
#include <vector>


double average(std::vector<double> values);

double raise_by_percent(std::vector<double>& values, double rate); 

std::vector<double> between(std::vector<double> values, double low, double high);

void print_vector(const std::vector<double>& values, std::string header_message); 

int main(int argc, char ** argv) {
	std::vector<double> vect(0);
	std::cout << "Adding items to vect ... " << std::endl;
	vect.push_back(14.50);
	vect.push_back(200.44);
	vect.push_back(56.78);
	vect.push_back(88.45);
	vect.push_back(97.49);
	std::cout << vect.size() << std::endl;
	for (int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << std::endl;
	}
	std::cout << "Removing last two items using push_back() ..." << std::endl;  
	double last = vect[vect.size()-1]; // storing the last item
	vect.pop_back();
	vect.pop_back();	
	for (int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << std::endl;
	}
	std::cout << "Last item from original list: " << last << std::endl;
	std::cout << "Average: " << average(vect) << std::endl;
	raise_by_percent(vect, 5);
	for (int i = 0; i < vect.size(); i++) {
		std::cout << vect[i] << std::endl;
	}
	vect.push_back(100.56);
	vect.push_back(138.88);
	vect.push_back(150.66);
	std::vector<double> vectrange = between(vect, 100.00, 200.00); 
	print_vector(vectrange, "Collecting between range 100.00 to 200.00"); 
	return 0;
}

/** Demoing use of vector parameters 
*/
double average(std::vector<double> values) {
	if (values.size() == 0) return 0; 
	double sum = 0;
	for (int i = 0; i < values.size(); i++) {
		sum = sum + values[i]; 
	}
	return sum / values.size(); 
}

/** Modify vector parameter (with parameter reference)
*/
double raise_by_percent(std::vector<double>& values, double rate) {
	for (int i = 0; i < values.size(); i++) {
		values[i] = values[i] * (1 + rate / 100); 
	}
}

/** Function that returns a vector. 
*/
std::vector<double> between(std::vector<double> values, double low, double high) {
	std::vector<double> result;
	for (int i = 0; i < values.size(); i++)
		if (low <= values[i] && values[i] <= high)
			result.push_back(values[i]);
	return result;
}

/** Constant reference parameter.
*/
void print_vector(const std::vector<double>& values, std::string header_message) {
	std::cout << header_message << std::endl; 
	for (int i = 0; i < values.size(); i++) {
		std::cout << values[i] << std::endl; 
	}
}
