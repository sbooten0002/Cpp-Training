#include"retailItem.h"
#include<iostream>
#include<string>

using namespace std;

//Constructor 
RetailItem::RetailItem(string desc,int units, double itemPrice) {
	description = desc;
	unitsOnHand = units;
	price = itemPrice; 
}

//Mutator functions
void RetailItem::setDescription(string descr) {
	description = descr;
}
void RetailItem::setUnitsOnHand(int units) {
	unitsOnHand = units; 
}
void RetailItem::setPrice(double itemPrice) {
	price = itemPrice; 
}
// accessor functions
string RetailItem::getDescription()const {
	return description; 
}
int RetailItem::getUnitsOnHand()const {
	return unitsOnHand;
}
double RetailItem::getPrice()const {
	return price; 
}
