#include "CheckingAccount.h"

CheckingAccount::CheckingAccount()
{

}
CheckingAccount::CheckingAccount(float currentbalance) : BaseAccount(accountBalance)
{

}
void CheckingAccount::withdraw(float w_amount)
{
	if (n_withdraw > 10)
	{
		BaseAccount::withdraw(w_amount + 5);
		n_withdraw++;
	}
	else
	{
		BaseAccount::withdraw(w_amount);
		n_withdraw++;
	}
}