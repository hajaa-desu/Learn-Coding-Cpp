#include <iostream>
#include "Country.h"


Country::Country() {
	population = 0;
	area = 0;
}

Country::Country(std::string c_name, int c_population, double c_area) 
	: name(c_name) {
	population = c_population;
	area = c_area; 
}

void Country::set_fields(std::string c_name, int c_population, double c_area){
	name = c_name;
	population = c_population;
	area = c_area;
}

std::string Country::get_name() const {
	return name;
}

int Country::get_population() const {
	return population;
}

double Country::get_area() const {
	return area;
}