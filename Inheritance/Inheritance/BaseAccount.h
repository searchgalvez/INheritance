#pragma once
class BaseAccount
{
protected:
	float accountBalance;
	int n_withdraw;
public:
	BaseAccount();
	BaseAccount(float currentbalance);
	void withdraw(float w_amount);
	void deposit(float d_amount);

	float GetBalance() const;
	void SetBalance(float balance);
};

