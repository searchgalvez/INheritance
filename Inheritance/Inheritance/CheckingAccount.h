#pragma once
#include "BaseAccount.h"

class CheckingAccount:
	public BaseAccount
{
public:
	CheckingAccount();
	CheckingAccount(float currentbalance);
	void withdraw(float w_amount);
};

