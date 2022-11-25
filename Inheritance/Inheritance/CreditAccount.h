#pragma once
#include "BaseAccount.h"

class CreditAccount : public BaseAccount
{
private:
	int amountSpent;
	int fee;
	const static float SpendingLimit;

public:
	CreditAccount();
	void withdraw(float w_amount);

	int getAmountSpent();
};

