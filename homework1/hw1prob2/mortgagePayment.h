#pragma once

class MortgagePayment {

private:
	double loanAmount;
	double interestRate;
	double totalYears;

public: 

	// mutators(setters) members
	// void used modify attribute 
	void setLoanAmount(double);
	void setInterestRate(double);
	void setTotalYears(double);
	
	// accessors(getters) members
	double getLoanAmount() const;
	double getInterestRate()const;
	double getTotalYears()const;

	// math for calculating monthly payment
	// and totaly amount paid
	// accessors 
	double getMonthlypayment()const;
	double getTotalPaid()const;


	// Constructor
	MortgagePayment();


};
