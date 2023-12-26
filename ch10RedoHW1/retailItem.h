#pragma once
// For string vairables
#include<string> 

using namespace std;

// Creating a class called "RetailItem"
// The components of a class is called
// members of the class. 
class retailItem {

// Private members:
// Cannot access it directly from 
// outside the class. 
// General rule for a private is 
// "members that should not be directly
// "accessed by the user should be private"
private:
	
	// The following below are the member vairables.
	string description;
	int unitsOnHand;
	double price; 

// Accessible outside of the class
// General rule for public:
// members that needs to be directly accessed
// outside of the class. 
public: 

// If the user has direct access to the
// member variables, member functions 
// such as 'setprice' are not needed'

	// The following are member functions

	// Accessor functions
	// The following functions accees the values of
	// the member vairables.
	// They do not modify the member variables.
	// Since accessor only accesses the values of the 
	// member variables, as a safeguard, const is at the end
	//  Member function with const is called al
	// 'constant function'
	// NOTE a constant member can only call other constant
	// member functions. 
	// Using const see page 660-661
	string getDescription() const;
	int getUnitsOnHand() const;
	double getPrice() const;
	
	// Mutator Functions
	// a member function of a cllas that modifies the value
	// of the member variables. 
	void setDescription(string detail);
	void setUnitsOnHand(int inStock);
	void setPrice(double price);


	// Constructors 
	// C++ does not automatically initialize the variables
	// Since it does not do that w/out a constructor we 
	// can get weird numbers as an output
	// To guarantee the member variables of a class are
	// initialized you use constructors.
	// There are 2 types of constructor 
	// one w/ or w/out parameters 
	
	// Constructor is a function and has no type. 


	// Constructor with parameters
	retailItem(string detail, int inStock, double cost);

	// Default Constructor 
	// Should always include a default because 
	// If we create a class object and it does not have parameters
	// the object declaration is incorrect.
	// You should always include a default. 
	retailItem();

};


