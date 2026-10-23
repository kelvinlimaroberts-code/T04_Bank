#ifndef CurrentAccountH
#define CurrentAccountH
//---------------------------------------------------------------------------
//CurrentAccount: class declaration
//---------------------------------------------------------------------------

#include "BankAccount.h"

class CurrentAccount : public BankAccount { //publicly inherit from BankAccount class
public:
    CurrentAccount();
	~CurrentAccount();
    double getOverdraftLimit() const;
private:
    double overdraftLimit_;
};
 
#endif
