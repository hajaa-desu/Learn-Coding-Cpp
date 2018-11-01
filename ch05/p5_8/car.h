#ifndef CAR_H
#define CAR_H

class Car {
public: 
	/** Constructor
	@param fuel_efficiency in km/h
	*/
	Car(double fuel_eff);

	
	/** Gets the amount of gas.
	*/
	double get_gas() const;

	/** Gets the fuel efficiency.
	*/
	double get_fuel_efficiency() const;
	
	/** Fuel up! 
	@param cgas Amount of gas in liters.
	*/ 
	void add_gas(double fuel);

	/** Distance traveled.
	@param distance Distance travelled in km. 
	@return -1 if out of fuel, otherwise, this.gas
	*/
	double drive(double distance); 
private:
	double fuel_efficiency; /* Fuel efficiency in liters/km */ 
	double gas; /* Amount of gas in tank */   

};

#endif /* CAR_H */