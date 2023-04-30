#pragma once
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	static int GetNumberOfAccounts();
	static int numberOfAccounts = 0;
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MAkePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	//literal String ^name = "Super Platinum Card";
	//initonly long accountNumber;
	void RedeemLoyaltyPoints();
private:
	LoyaltyScheme^ scheme;
	long accountNumber;
	double currentBalance;
	double creditLimit;
};

static double interestRate;
//static CreditCardAccount;
