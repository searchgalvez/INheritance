// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"

int main()
{
	CheckingAccount Main;
	SavingsAccount Saving;
	CreditAccount Credit;

	std::ifstream filein;
	filein.open("output.txt");

	if (filein.is_open())
	{
		int _checking;
		filein >> _checking;
		Main.SetBalance(_checking);

		int _saving;
		filein >> _saving;
		Saving.SetBalance(_saving);

		int _credit;
		filein >> _credit;
		Credit.SetBalance(_credit);

		filein.close();

	}
	else
	{
		std::cout << "File did not open" << std::endl;
	}

	std::cout << "Account Balances: " << std::endl;
	Main.SetBalance(1000);
	std::cout << "Checking: \t" << Main.GetBalance() << std::endl;
	Saving.SetBalance(1500);
	std::cout << "Savings: \t" << Saving.GetBalance() << std::endl;
	Credit.SetBalance(2000);
	std::cout << "Credit: \t" << Credit.GetBalance() << std::endl;


	int selection;
	while (true)
	{
		std::cout << "\n1) Withdraw \n" << "2) Deposit \n" << "3) Exit\n";
		std::cout << "\nChoose operation: ";
		std::cin >> selection;

		if (selection == 1)
		{
			int amount;
			int account;
			std::cout << "\n1) Checking \n" << "2) Saving \n" << "3) Credit\n";
			std::cout << "\nPick an account: ";
			std::cin >> account;
			switch (account)
			{
			case 1:
			{
				std::cout << "\nEnter amount of withdrawal: $";
				std::cin >> amount;
				Main.withdraw(amount);
				std::cout << "$" << amount << " Withdrawn from your Checking Account. Your current balance is: $" << Main.GetBalance() << std::endl;
				break;
			}
			system("pause");
			case 2:
			{
				std::cout << "\nEnter amount of withdrawal: $";
				std::cin >> amount;
				Saving.withdraw(amount);
				std::cout << "$" << amount << " Withdrawn from your Savings Account. Your current balance is: $" << Saving.GetBalance() << std::endl;
				break;
			}
			system("pause");
			case 3:
			{
				std::cout << "\nEnter amount of withdrawal: $";
				std::cin >> amount;
				Credit.withdraw(amount);
				std::cout << "$" << amount << " Withdrawn from your Credit Account. Your current balance is: $" << Credit.GetBalance() << std::endl;
				break;
			}
			system("pause");
			default:
			{
				std::cout << "Please enter a valid entry." << std::endl;
				continue;
			}
			break;
			}
		}
		else if (selection == 2)
		{
			int amount;
			int account;
			std::cout << "\n1)Checking \n" << "2)Saving \n" << "3)Credit \n";
			std::cout << "\nPick an account: ";
			std::cin >> account;
			switch (account)
			{
			case 1:
			{
				std::cout << "\nEnter amount of deposit: $" << std::endl;
				std::cin >> amount;
				Main.deposit(amount);
				std::cout << "$" << amount << " Has been deposited to your Checking account. Your current balance is: $" << Main.GetBalance() << std::endl;
				break;
			}
			system("pause");
			case 2:
			{
				std::cout << "\nEnter amount of deposit: $" << std::endl;
				std::cin >> amount;
				Saving.deposit(amount);
				std::cout << "$" << amount << " Has been deposited to your Savings account. Your current balance is: $" << Saving.GetBalance() << std::endl;
				break;
			}
			system("pause");
			case 3:
			{
				std::cout << "\nEnter amount of deposit: $" << std::endl;
				std::cin >> amount;
				Credit.deposit(amount);
				std::cout << "$" << amount << " Has been deposited to your Credit account. Your current balance is: $" << Credit.GetBalance() << std::endl;
				break;
			}
			system("pause");
			default:
			{
				std::cout << "Please enter a valid entry" << std::endl;
				continue;
			}
			break;
			}

		}
		else if (selection == 3)
		{
			break;
		}
		else
		{
			std::cout << "Please enter a valid selection";
		}
	}
	std::ofstream fileout;

	fileout.open("Lab5.txt");

	if (fileout.is_open())
	{
		fileout << Main.GetBalance() << std::endl;
		fileout << Saving.GetBalance() << std::endl;
		fileout << Credit.GetBalance();
		fileout.close();
	}
	else
	{
		std::cout << "File did not open" << std::endl;
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
