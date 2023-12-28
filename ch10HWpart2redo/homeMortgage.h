#pragma once
#include<string>

class homeMortgage {

private:
	double loanAmount;
	double yearlyInterestRate;
	int yearsOnLoan;

	double calculateTerm(); // will be used to calculate the 'term'. 

public: 

	// mutator 'setter' 
	void setLoanAmount(double loan);
	void setInterestRate(double interest);
	void setYearsOnLoan(int years);

	// Accessors 'getter' -const
	double getMonthlyPaymentAmount() const; // calculate and return the montly paymen
	double getTotalAmountPaid() const; // total amount paid over the entire loan period 

	// Default Constructors
	homeMortgage();

	//  Constructors with parameters
	homeMortgage(double loan, double interest, int timeLeftonLoan);
	
};
