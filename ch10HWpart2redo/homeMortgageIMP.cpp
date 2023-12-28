#include"homeMortgage.h"
#include<iostream>
using namespace std;

void homeMortgage::setLoanAmount(double loan) {
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