#include <iostream>
#include "Account.h"


Account::Account() {
	balance = 0.0; 
}

void Account::deposit(double amount){
	balance += amount;
}

double Account::withdraw(double amount){
	if (amount > balance) {
		balance -= 5.00;
		return -1; 
	}
	balance -= amount;
	return amount; 
}

double Account::get_balance() const {
	return balance;
}

double Account::get_compounding_interest(int N) const {
	double total = balance;
	for (int i=0; i<N; i++){
		total *= 1.05;
	}
	return total;
}



