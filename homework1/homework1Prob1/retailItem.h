#pragma once
#include<string>
using namespace std;

class RetailItem {

public:
	//mutator methods
	void setDescription(string);
	void setUnitsOnHand(int);
	void setPrice(double);

	//accessor methods
	string getDescription()const;
	int getUnitsOnHand()const;
	double getPrice()const; 

	//Constuctor
	RetailItem(string, int, double);

private: 
	string description;
	int unitsOnHand;
	double price;

};