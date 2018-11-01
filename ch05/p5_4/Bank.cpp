#include <iostream>
#include <iomanip>

#include "Bank.h"

Bank::Bank() {
	std::cout << std::setprecision(2) << std::fixed; 
}

void Bank::deposit(double amount, std::string account){
	Account* bank_account; 
	if (account == "C"){
		std::cout << "cheking account ..." << std::endl;
		bank_account = &checking; 
		std::cout << "\tDeposited to checking account, balance: ";
	} else {
		std::cout << "savings account ..." << std::endl;
		bank_account = &savings; 
		std::cout << "\tDeposited to savings account, balance: ";
	}
	bank_account->deposit(amount);
	std::cout << std::setw(10) << bank_account->get_balance() << std::endl;

}

void Bank::withdraw(double amount, std::string account){
	double cash = 0.0; 
	Account* bank_account; 
	if (account == "C"){
		std::cout << "checking account ..." << std::endl;
		bank_account = &checking; 
	} else {
		std::cout << "savings account ..." << std::endl;
		bank_account = &savings; 
	}
	cash = bank_account->withdraw(amount); 
	if (cash == -1) {
		std::cout << "\tTransaction failure: Insufficient funds." << std::endl;
		std::cout << "\t$ 5.00 deducted from current balance.";
	} else {
		std::cout << "\tTransaction is successful!" << std::endl; 
	}
	std::cout << "\tCurrent balance: " << std::setw(10) << bank_account->get_balance(); 		

}

void Bank::transfer(double amount, std::string account){
	double cash = 0.0; 
	Account* from_account;
	Account* to_account; 
	if (account == "C") {
		std::cout << "Transfering from checking to savings ..." << std::endl;
		from_account = &checking;
		to_account = &savings;
	} else {
		std::cout << "Transfering from savings to checking ..." << std::endl;
		from_account = &savings;
		to_account = &checking;
	}
	cash = from_account->withdraw(amount);
	if (cash == -1){
		std::cout << "\tTransaction failure. Insufficient funds." << std::endl;
		std::cout << "\tPenalty imposed: $ 5.00 deducted from account." << std::endl; 
	} else {
		to_account->deposit(cash);
		std::cout << "\tTransaction is successful." << std::endl;
	}
	print_balances();
}

void Bank::print_balances() const{
	std::cout << "\tCurrent balances: " << std::endl;
	std::cout << std::setw(10) << "checking:" << std::setw(10) << checking.get_balance() << std::endl;
	std::cout << std::setw(10) << "savings:" << std::setw(10) << savings.get_balance() << std::endl; 
}
