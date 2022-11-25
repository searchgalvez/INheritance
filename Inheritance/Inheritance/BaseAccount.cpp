#include "BaseAccount.h"
#include <iostream>

BaseAccount::BaseAccount()
{
	this->accountBalance = 0;
	int n_withdraw = 0;
}
BaseAccount::BaseAccount(float currentbalance)
{
	this->accountBalance = currentbalance;
}
void BaseAccount::withdraw(float w_amout)
{
	if (accountBalance - w_amout >= 0)
	{
		this->accountBalance -= w_amout;
		n_withdraw++;
	}
}
void BaseAccount::deposit(float d_amout)
{
	this->accountBalance += d_amout;
}
float BaseAccount::GetBalance() const
{
	return accountBalance;
}
void BaseAccount::SetBalance(float balance)
{
	accountBalance = balance;
}