#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string.h>


class Country {
public:

	/** Constructor.
	*/
	Country();

	/** Constructor.

	@param c_name Country name.
	@param c_population Country's population.
	@param c_area Country's area. 
	*/
	Country(std::string c_name, int c_population, double c_area);
	
	/** Set the fields. 

	@param name Country name.
	@param c_population Country population. 
	@param c_area Country area. 
	*/
	void set_fields(std::string c_name, int c_population, double c_area);
	
	/** Getter for name. 

	@return name
	*/
	std::string get_name() const;

	/** Getter for population size. 

	@return population
	*/
	int get_population() const;  

	/** Getter for area.

	@return area
	*/
	double get_area() const; 

private:
	std::string name;
	int population;
	double area; 
};
#endif /* COUNTRY_H */