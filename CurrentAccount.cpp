//---------------------------------------------------------------------------
//CurrentAccount: class implementation
//---------------------------------------------------------------------------
#include "CurrentAccount.h" 

//---------------------------------------------------------------------------
//public member functions

//constructors
CurrentAccount::CurrentAccount()
: 	//call BankAccount constructor implicitly
  overdraftLimit_(0.0)
{
	//cout << "\nCurrentAccount() default constructor";
}
CurrentAccount::~CurrentAccount()
{	//call BankAccount destructor implicitly
	//cout << "\n~CurrentAccount() destructor";
}

//other public member functions
double CurrentAccount::getOverdraftLimit() const {
    return overdraftLimit_;
}

//---------------------------------------------------------------------------
//private member functions
