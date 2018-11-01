#include <iostream>
#include <iomanip>
#include <stdio.h>

#include "student.h"


int main(int argc, char ** argv){
	int choice = 0; 
	int input = 0;
	Student student1("Anita Sarawak");
	Student student2("Kitty Bebe", 34);
	Student* stud = NULL;
	std::cout << std::setprecision(2) << std::fixed; 
	while (true) {
		std::cout << "STUDENT LIST" << std::endl;
		std::cout << std::setw(20) << "NAME" 
				  << std::setw(12) << "TOTAL SCORE"
				  << std::setw(12) << "AVERAGE"
				  << std::endl; 
		std::cout << std::setw(20) << student1.get_name() 
				  << std::setw(12) << student1.get_total_score()
				  << std::setw(12) << student1.get_average_score()
				  << std::endl; 		  
		std::cout << std::setw(20) << student2.get_name() 
				  << std::setw(12) << student2.get_total_score()
				  << std::setw(12) << student2.get_average_score()
				  << std::endl; 		  
		std::cout << "Bish add scores pls. Pick the student > ";
		std::cin >> choice; 
		if (choice == 1) {
			stud = &student1;
		} else {
			stud = &student2;
		}
		std::cout << "Bish add score pls";
		std::cin >> input;
		stud->add_quiz(input);
		std::cout << "Continue? (0 for yes) ";
		std::cin >> choice;
		if (choice != 0) break; 
	}
	return 0;
}