//---------------------------------------------------------------------------
//BankAccount: class implementation
//---------------------------------------------------------------------------
#include "BankAccount.h"

//---------------------------------------------------------------------------
//public member functions

//constructors
BankAccount::BankAccount()
: accountNumber_(""), sortCode_(""),
  creationDate_(Date(0, 0, 0)),
  balance_(0.0),
  transactionCount_(0)
{
	//cout << "\nBankAccount() default constructor";
}
BankAccount::BankAccount(const string& aN, const string& sC, double b)
: accountNumber_(aN), sortCode_(sC),
  creationDate_(Date()),
  balance_(b),
  transactionCount_(0)
{
	//cout << "\nBankAccount(const string& aN, const string& sC, double b) constructor";

}
BankAccount::~BankAccount()
{
	//cout << "\n~BankAccount() destructor";
}

//other public member functions
const string BankAccount::getAccountNumber() const {
    return accountNumber_;
}
const string BankAccount::getSortCode() const {
    return sortCode_;
}
const Date BankAccount::getCreationDate() const {
    return creationDate_;
}
double BankAccount::getBalance() const {
    return balance_;
}
int BankAccount::getTransactionCount() const {
	return transactionCount_;
}
bool BankAccount::canWithdraw(double a) const {
	return balance_ >= a;
}
bool BankAccount::canDeposit(double a) const {
	return true;
}
void BankAccount::recordTransaction(double amount) {
	++transactionCount_;	//increase numbers of transactions on the account
	updateBalance(amount);	//increase or decrease balance
}
void BankAccount::deposit(double amountToDeposit) {
	//not finished...
	assert (amountToDeposit >= 0);
    recordTransaction(amountToDeposit);
	cout << "\nOK: DEPOSIT AUTHORISED: \234" << amountToDeposit<< "!";
}

const string BankAccount::prepareStatement() const {
	ostringstream os;
	//display account number
	os << "\nACCOUNT NUMBER:         " << accountNumber_;
	//display sort code  
	os << "\nSORT CODE:              " << sortCode_;
	//display creation date
	os << "\nCREATION DATE:          " << creationDate_;
    //display balance_
	os << fixed << setprecision(2);
	os << "\nBALANCE:                \234" << balance_;
	//display transactionCount_
	os << "\nNUMBER OF TRANSACTIONS: " << transactionCount_;
	return os.str();
}

//---------------------------------------------------------------------------
//private member function
void BankAccount::updateBalance(double amount) {
    balance_ +=  amount;   //add/take amount to/from balance
}
