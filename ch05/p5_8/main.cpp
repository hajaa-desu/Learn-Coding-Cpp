#include <iostream>
#include <iomanip>
#include "car.h"

int main(int argc, char ** argv){
	int choice = 0;
	double param; 
	double fuel_eff;
	std::cout << "Welcome to DRIVE A CAR!" << std::endl;
	std::cout << "\tFuel efficiency: ";
	std::cin >> fuel_eff; std::cout << " liters/km" << std::endl;
	std::cout << "OKAY. Let's go for a drive!" << std::endl; 		
	Car my_proton(fuel_eff);
	while (true) {
		std::cout << "\t> (1) Fill her up!" << std::endl;
		std::cout << "\t> (2) Drive!" << std::endl;
		std::cout << "\t\tAnswer: (choice) (param) > ";
		std::cin >> choice >> param;
		std::cout << std::endl;
		switch(choice) {
			case 1:
				my_proton.add_gas(param);
				std::cout << "\tFilling her up ..." << std::endl;
				std::cout << "\tDone. Current gas amount: ";
				std::cout << my_proton.get_gas(); 
				break;
			case 2:
				double balance; 
				std::cout << "\tDriving ...";
				if((balance = my_proton.drive(param)) < 0) {
					std::cout << "\tOOPS! You've ran out of gas!" << std::endl; 
				} else if (balance < my_proton.get_fuel_efficiency()) {
					std::cout << "\tRunning out ... You can only travel for approx. 1km" << std::endl; 
				} else {
					std::cout << "\tThat was fun! Whatta drive :D." << std::endl;			
				}
				std::cout << "\tBalance in tank: " << my_proton.get_gas() << std::endl; 
				break;
			default:
				std::cout << "\t\tInvalid choice.";	
				break;
		}	
		std::cout << std::endl;
			std::cout << "Continue? (0 for yes) " << std::endl;
			std::cin >> choice;
			if (choice != 0) break;
	}
	return 0;
}