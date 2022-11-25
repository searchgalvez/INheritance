#include "CreditAccount.h"
#include <iostream>

const float CreditAccount::SpendingLimit = 40;

CreditAccount::CreditAccount()
{
	this->fee = -5000;
	this->amountSpent = 0;
}
void CreditAccount::withdraw(float w_amount)
{
	this->amountSpent = accountBalance - w_amount;
	if (w_amount > SpendingLimit)
	{
		std::cout << "you have been charged an $5000 fee for going over your spending limit\n";
		amountSpent += fee;
	}
}
int CreditAccount::getAmountSpent()
{
	return amountSpent;
}