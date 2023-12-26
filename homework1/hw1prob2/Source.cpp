#include"mortgagePayment.h"
#include<iostream>
#include<cmath>
using namespace std;


int main() {

	MortgagePayment mortgage;

	double loanAmount, interestRate, totalYears;

	// Loan details
	cout << "Please enter the loan amount: "<<endl;
	cin >> loanAmount;
	mortgage.setLoanAmount(loanAmount);

	// interest details
	cout << "Please enter the interest rate (in percent): "<<endl;
	cin >> interestRate;
	// converting to decimal 
	mortgage.setInterestRate(interestRate / 100);

	// Years details
	cout << "Please enter the number of years: " << endl;
	cin >> totalYears;
	mortgage.setTotalYears(totalYears);

	// Calculate and display monthly payment 
	// and total amount paid
	double monthlyPayment = mortgage.getMonthlypayment();
	double totalAmountPaid = mortgage.getTotalPaid();

	cout << "Your monthly payment is: $ " << monthlyPayment << endl;
	cout << "Your total Amount paid is: $ " << totalAmountPaid << endl;

	return 0; 
}