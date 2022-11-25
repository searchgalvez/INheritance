#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount()
{

}
SavingsAccount::SavingsAccount(float currentbalance) : BaseAccount(accountBalance)
{

}
void SavingsAccount::withdraw(float w_amount)
{
	if (n_withdraw < 3)
	{
		BaseAccount::withdraw(w_amount);
		n_withdraw++;
	}
	else
	{
		std::cout << "I'm sorry, you have reached your withdrawal allowance" << std::endl;
	}
}