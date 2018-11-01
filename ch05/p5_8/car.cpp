#include <iostream>
#include "car.h"

Car::Car(double fuel_eff){
	fuel_efficiency = fuel_eff;
}

void Car::add_gas(double fuel){
	gas = fuel;
}

double Car::drive(double distance){
	gas = gas - (distance * fuel_efficiency); 
	if (gas <= 0) {
		gas = 0;
		return -1;
	}
	return gas; 
}

double Car::get_gas() const{
	return gas;
}

double Car::get_fuel_efficiency() const{
	return fuel_efficiency;
}