#include <iostream>
#include <iomanip>
#include "Account.h"

int main() {
	int choice = 0;
	double amount;
	Account my_account; 
	std::cout << std::setprecision(2) << std::fixed;
	while (true) {
		std::cout << "Welcome to your account." << std::endl;
		std::cout << "\tWhat would you like to do today?" << std::endl;
		std::cout << "\t1: Deposit" << std::endl;
		std::cout << "\t2: Withdraw" << std::endl;
		std::cout << "\t3: Check Balance" << std::endl;
		std::cout << "\t4: Check Balance after N month" << std::endl;
		std::cout << "CHOICE: ";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "\tPlease enter amount: ";
			std::cin >> amount; 
			my_account.deposit(amount);
			std::cout << "\tTransaction successful. Current balance: " 
					  << std::setw(10)
					  << my_account.get_balance() << std::endl;
		} else if (choice == 2) {
			std::cout << "\tPlease enter amount: ";
			std::cin >> amount;
			if (my_account.withdraw(amount) == -1) {
				std::cout << "\tTransaction failure: Amount requested exceeds balance." << std::endl;
				std::cout << "\tPenalty: $5 has been deducted from balance." << std::endl;
			} else {
				std::cout << "\tTransaction successful. Current balance: "
						  << std::setw(10) 
						  << my_account.get_balance() << std::endl;
			}
		} else if (choice == 3){
			std::cout << "\tCurrent balance: " 
					  << std::setw(10) 
					  << my_account.get_balance() << std::endl;
		} else {
			std::cout << "\tWe will calculate for you your compunding interest." << std::endl;
			std::cout << "\tPlease enter the number of month: ";
			int month = 0;
			std::cin >> month;
			std::cout << "\tCalculated: " << std::setw(10) << my_account.get_compounding_interest(month);
			std::cout << std::endl;

		}
		std::cout << "Do you wish to continue with another transaction?" << std::endl;
		std::cin >> choice;
		if (choice == -1) break;
	}	
	return 0;
}