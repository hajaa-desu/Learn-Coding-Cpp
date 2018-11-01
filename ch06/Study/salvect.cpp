#include <iostream>
#include <vector>


int main() {
	std::vector<double> salaries; 
	std::cout << "Please enter salaries, 0 to quit:\n";
	bool more = true; 
	while (more) {
		double s;
		std::cin >> s; 
		if (s == 0) 
			more = false;
		else 
			salaries.push_back(s);
	}
	
	double highest = salaries[0];
	int i;
	for (i = 1; i < salaries.size(); i++) 
		if (salaries[i] > highest)
			highest = salaries[i]; 

	for (i = 0; i < salaries.size(); i++) {
		std::cout << salaries[i];
		if (salaries[i] == highest)
			std::cout << " <== highest value";
		std::cout << "\n";
	}
	return 0;
}
