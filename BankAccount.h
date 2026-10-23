#ifndef BankAccountH
#define BankAccountH
//---------------------------------------------------------------------------
//BankAccount: class declaration
//---------------------------------------------------------------------------

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

#include "Date.h"
 
class BankAccount {
public:
    BankAccount();
    BankAccount(const string& aN, const string& sC, double b);
	~BankAccount();
	const string getAccountNumber() const;
	const string getSortCode() const;
	const Date getCreationDate() const;
	double getBalance() const;
	int getTransactionCount() const;
	bool canWithdraw(double a) const; //check whether the given amount can be withdrawn
	bool canDeposit(double a) const;
	void recordTransaction(double a);
	void deposit(double);
	const string prepareStatement() const;	//display details common to all bank accounts
private:
    //data items
    string accountNumber_;
    string sortCode_;
    Date creationDate_;
	double balance_;
	int transactionCount_;
    //support functions
	void updateBalance(double a);
};

#endif
