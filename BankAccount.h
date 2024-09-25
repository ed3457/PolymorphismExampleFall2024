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
	void withdraw(float a);

	BankAccount();
	BankAccount(string cn, float b); 

};

