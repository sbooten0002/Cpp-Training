#pragma once
#include<string>

class homeMortgage {

private:
	double monthlyPayment;
	double loanAmount;
	double yearlyInterestRate;
	int yearsOnLoan;

public: 

	// mutator 'setter' 
	void setLoanAmount();
	void setInterestRate();
	void setYearsOnLoan();

	// Accessors 'getter' -const
	double getMonthlyPaymentAmount() const;
	double getTotalAmountPaid() const;

	// Default Constructors
	homeMortgage();

	//  Constructors with parameters
	homeMortgage(double Payment, double loan, int years);
	
};
