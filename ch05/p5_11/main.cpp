#include <iostream>
#include <iomanip>
#include <vector>

#include "Country.h"


int main (int argc, char ** argv) {
	std::vector<Country> country(5);
	country[0].set_fields("California", 10000, 150.65);
	country[1].set_fields("New Zealand", 30500, 200.67);
	country[2].set_fields("New Mexico", 40260, 180.44); 
	country[3].set_fields("Seattle", 54433, 60.55);
	country[4].set_fields("Miami", 43333, 180.44);

	int largest_area = 0; 
	int largest_population = 0;
	int largest_pop_density = 0; 
	for (int i = 1; i < 5; i++) {
		if ((country[i].get_area() > country[largest_area].get_area()))
			largest_area = i; 
		if ((country[i].get_population() > country[largest_population].get_population()))
			largest_population = i;
		if ((country[i].get_population()/country[i].get_area()) > (country[largest_pop_density].get_population()/country[largest_pop_density].get_area()))
			largest_pop_density = i;
	}

	for (int i = 0; i < 5; i++) {
		std::cout << std::setw(15) << country[i].get_name() 
				  << std::setw(10) << country[i].get_population()
				  << std::setw(10) << country[i].get_area(); 
		if (largest_population == i)
			std::cout << "< largest population ";
		if (largest_area == i) 
			std::cout << "< largest area";
		if (largest_pop_density == i)
			std::cout << "< largest population density";
		std::cout << std::endl;
	}
	return 0;
}