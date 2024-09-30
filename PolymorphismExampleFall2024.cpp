// PolymorphismExampleFall2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingsAccount.h"
using namespace std; 
int main()
{
	BankAccount *b1 = new BankAccount("Kyle", 5500);
	SavingsAccount* sa1 = new SavingsAccount("Sarah",5500,6);

	BankAccount *ba2 = new SavingsAccount("Jacob", 5000, 6);


	//sa1->withdraw(500);

	//cout << sa1->getBalance() << endl;

	BankAccount** ar1 = new BankAccount *[2];// Array of pointers

	ar1[0] = b1; 
	ar1[1] = sa1;

	for (int i = 0; i < 2; i++)
	{
		ar1[i]->withdraw(50);

	}

	for (int i = 0; i < 2; i++)
	{
		cout<<ar1[i]->getBalance() << endl;

	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
