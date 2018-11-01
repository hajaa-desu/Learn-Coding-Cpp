#ifndef ACCOUNT_H
#define ACCOUNT_H
/** Stores account info. */
class Account {

public:
	/** Constructor */
	Account();

	/** Add money of amount to account.

	@param amount The amount of money to add. 
	*/
	void deposit(double amount);
	
	/** Withdraw amount from account. 
	
	If amount is more than available balance, 
	then a $5 penalty will be imposed. 

	@param amount The amount of money to withdraw.
	@return amount or -1 if failure.
	*/
	double withdraw(double amount);
	
	/** Returns the available balance. 
	*/
	double get_balance() const;

	/** Calculates and return compounding interest.

	@param N Number of months. 
	*/
	double get_compounding_interest(int N) const;
private:
	/* Balance in account. */
	double balance;

};

#endif /* ACCOUNT_H */