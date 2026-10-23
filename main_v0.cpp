////////////////////////////////////////////////////////////////////////
// OOP Tutorial Bank: Class Derivation (static binding) (version 0)
////////////////////////////////////////////////////////////////////////
//--------include libraries
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>

using namespace std;

#include "BankAccount.h"
#include "CurrentAccount.h"

int main()
{
	double getPositiveValue();

	//test code
	BankAccount ba1;
	cout << "\nBALANCE: \234" << ba1.getBalance();
	cout << "\n\nMINI STATEMENT \n" << ba1.prepareStatement() << endl;
	BankAccount ba2("001", "00-44", 500.0);
	cout << "\n\nMINI STATEMENT \n" << ba2.prepareStatement() << endl;
	ba2.deposit(200.0);
	cout << "\n\nMINI STATEMENT \n" << ba2.prepareStatement() << endl;
	//end test code
	cout << "\n\n";
	system("pause");
	return 0;
}

double getPositiveValue() { 
	double amount;
	cin >> amount;
	while (amount < 0) {
		cout << "\nERROR: AMOUNT MUST BE POSITIVE: \234";
		cin >> amount;
	}
	return amount;
}
