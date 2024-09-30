#pragma once
#include <string>
using namespace std; 

class BankAccount
{
private: 
	string clientName;
	float balance;

public:

	void setClientName(string n);
	string getClientName();

	float getBalance();

	void deposit(float a);
	virtual void withdraw(float a);// Virtual turns on dynamic binding mode

	BankAccount();
	BankAccount(string cn, float b); 

};

