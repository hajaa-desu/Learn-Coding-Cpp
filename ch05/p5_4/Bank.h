#ifndef BANK_H
#define BANK_H

#include <string.h>
#include "Account.h"

class Bank {

public:
	Bank();

	/** Deposits amount to account balance.

	@param amount The amount to deposit.
	@param account The string corresponding to the account. ("C" for checking, "S" for savings)
	*/
	void deposit(double amount, std::string account);
	
	/** Withdraw ammount from account. 

	@param amount The amount to deposit.
	@param account The string corresponding to the account. ("C" for checking, "S" for savings)
	*/
	void withdraw(double amount, std::string account);
	
	/** Transfer amount from one account to another.

	If account is set to "C", transfers from checking to savings.
	If account is set to "S", transfers from savings to checking.

	@param amount The amount to deposit.
	@param account The string corresponding to the account. ("C" for checking, "S" for savings)
	*/
	void transfer(double amount, std::string account);
	
	/** Print balances from both account. */
	void print_balances() const; 
private: 
	Account checking;
	Account savings;
};

#endif /* BANK_H */ 