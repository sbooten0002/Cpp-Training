#include <iostream>
#include"retailItem.h"
#include<string>

using namespace std;

int main() {

	// Declaring an object 
	// Once a class is defined you can declare variables of that type
	// A class variable is called a 'class object' or 'class instance'
	// To declare a class oject it's the same as declaring any
	// other variable. 
	// each oject will has this many members:
	// This many function members: 8 including the 2 constructors
	// This many member variables: 3 

	// note when I create object it invokes
	// the default constructor
	// therefore I'm initialing this object to 
	// be zero. 
	retailItem defaultItem; 

	// Invoking a constructor with parameters
	// b/c item2 has 3 paramets. 
	retailItem item1("Shirt", 4, 15.00); 

	// Accessing Class Members
	// Once an object of a class is declared, it can access the 
	// members of the class. 
	// Syntax: classObject.memberName
	// '(.)' is an operator called the member access operator
	//cout << "Default Item Description : " << defaultItem.getDescription() << endl; // this will invoke my default constructor and will print "hello" 
	cout << "Item 1 Descrpition: " << item1.getDescription() << endl;
	cout << "Item 1 Units on hand : " << item1.getUnitsOnHand() << endl;
	cout << "Item 1 price: " << item1.getPrice() << endl; 


	return 0; 
}