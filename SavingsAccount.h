#pragma once
#include "BankAccount.h"
class SavingsAccount :public BankAccount
{
private:
	float interestRate;

public:
	void setInterestRate(float ir);
	float getInterestRate();

	void withdraw(float a);// override 

	SavingsAccount();
	SavingsAccount(string cn, float b, float ir);
};

