#include "SavingsAccount.h"

void SavingsAccount::setInterestRate(float ir)
{
	interestRate = ir; 
}

float SavingsAccount::getInterestRate()
{
	return interestRate;
}

void SavingsAccount::withdraw(float a)
{
	BankAccount::withdraw(a + 3);
}

SavingsAccount::SavingsAccount():BankAccount()
{
	interestRate = 5;
}

SavingsAccount::SavingsAccount(string cn, float b, float ir):BankAccount(cn,b)
{
	interestRate = ir;
}
