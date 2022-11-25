#pragma once
#include "BaseAccount.h"

class SavingsAccount : public BaseAccount
{
public:
	SavingsAccount();
	SavingsAccount(float currentbalance);
	void withdraw(float w_amount);
};

