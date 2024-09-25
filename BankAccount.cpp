#include "BankAccount.h"

void BankAccount::setClientName(string n)
{
	clientName = n;
}

string BankAccount::getClientName()
{
	return clientName;
}

float BankAccount::getBalance()
{
	return balance;
}

void BankAccount::deposit(float a)
{
	balance += a;
}

void BankAccount::withdraw(float a)
{
	balance -= a;
}

BankAccount::BankAccount()
{
	balance = 0;
	clientName = "Not Set";
}

BankAccount::BankAccount(string cn, float b)
{
	balance = b;
	clientName = cn;
}
