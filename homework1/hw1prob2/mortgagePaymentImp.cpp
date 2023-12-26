#include"mortgagePayment.h"
#include<iostream>
#include<cmath>
using namespace std;


// constructor  initializing members to zero
MortgagePayment::MortgagePayment() {
	loanAmount = 0;
	interestRate = 0;
	totalYears = 0;

}

// mutator (setters) methods
// checks for negative laon entry
void MortgagePayment::setLoanAmount(double amount) {
	if (amount >= 0) {
		loanAmount = amount;
	}
	else {
		cout << "Loan amount cannot be negative." << endl;
	}
}
// checks for negative interest entry
void MortgagePayment::setInterestRate(double interest) {
	if (interest >= 0) {
		interestRate = interest;
	}
	else {
		cout << "Interest rate  cannot be negative." << endl;
	}
}

void MortgagePayment::setTotalYears(double years) {
	if (years >= 0) {
		totalYears = years;
	}
	else {
		cout << "Total years entered cannot be negative." << endl;
	}
}

// Accessors(getters) methods
double MortgagePayment::getLoanAmount()const {
	return loanAmount;
}
double MortgagePayment::getInterestRate()const {
	return interestRate;
}
double MortgagePayment::getTotalYears()const {
	return totalYears;
}

// Accessors and calculations
double MortgagePayment::getMonthlypayment()const {
	//checking for for positive input values
	if (loanAmount <= 0 || interestRate <= 0 || totalYears <= 0) {
		return 0;
	}
	double monthlyInterestRate = interestRate / 12.0;
	double term = pow(1 + monthlyInterestRate, 12 * totalYears);

	double monthlyPayment = (loanAmount * monthlyInterestRate * term) / (term - 1);
	
	return monthlyPayment; 
}

double MortgagePayment::getTotalPaid()const {
	return getMonthlypayment() *12* totalYears; 
}
	
	