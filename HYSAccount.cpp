#include "HYSAccount.h"

void HYSAccount::withdraw(float a)
{
	BankAccount::withdraw(a + a*0.3);
}
