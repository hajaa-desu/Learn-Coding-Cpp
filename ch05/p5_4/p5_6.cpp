#include <iostream>
#include <iomanip>
#include <string.h>
#include "Bank.h"

int main() {
	Bank cimb;
	int choice;
	std::string account_type;
	double amount; 
	while (true) {
		std::cout << "Welcome to CIMB online" << std::endl;
		std::cout << "What's the business today?" << std::endl;
		std::cout << "\t1: Deposit" << std::endl;
		std::cout << "\t2: Withdraw" << std::endl;
		std::cout << "\t3: Transfer" << std::endl; 
		std::cout << "\t4: Account balances" << std::endl;
		std::cout << "Your choice: ";
		std::cin >> choice;
		if (choice != 4) {
			std::cout << "Please choose account: " << std::endl;
			std::cout << "\tC checking" << std::endl;
			std::cout << "\tS savings" << std::endl; 
			std::cout << "Your choice:";
			std::cin >> account_type;
			std::cout << "Please enter amount: ";
			std::cin >> amount;  			
		}
		switch(choice) {
			case 1: 
				cimb.deposit(amount, account_type);
				break;
			case 2:
				cimb.withdraw(amount, account_type);
				break;
			case 3: 
				cimb.transfer(amount, account_type); 
				break; 
			case 4: 
				cimb.print_balances(); 
				break;
			default:
				std::cout << "WARNING: Invalid choice." << std::endl;
				break;
		}
		if (choice == 999) break;
	}
	return 0;
}