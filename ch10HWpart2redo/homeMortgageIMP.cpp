#include"homeMortgage.h"
#include<iostream>
using namespace std;

// To reference the member functions from the headerfile
// use the scope resolution operator :: (doulbe colon)
// This define the 'set loan amount' function.
void homeMortgage::setLoanAmount(double loan) {
	// If the loan amount is greater than or equal to 0
	// Checking for valid input
	if (loan >= 0) {
		loanAmount = loan;
	}
}

void homeMortgage::setInterestRate(double interest) {
	if (interest >= 0) {
		yearlyInterestRate = interest;
	}
}

void homeMortgage::setYearsOnLoan(int years) {
	if (years >= years) {
		yearsOnLoan = years;
	}
}






/*
	double getMonthlyPaymentAmount() const; // calculate and return the montly paymen
	double getTotalAmountPaid() const; // total amount paid over the entire loan period

*/