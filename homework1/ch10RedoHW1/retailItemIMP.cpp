#include"retailItem.h"
#include<string>
using namespace std;

void retailItem::setDescription(string detail) {
	description = detail;
}
void retailItem::setUnitsOnHand(int inStock){
	unitsOnHand = inStock; 
}

void retailItem::setPrice(double cost){
	price = cost; 
}

string retailItem::getDescription()const {
	return description;
}
int retailItem::getUnitsOnHand() const {
		return unitsOnHand;
}
double retailItem::getPrice() const {
	return price; 
}

// Definition for default constructor
// This is where I will initialize the private members. 
retailItem::retailItem() : description("hello "), unitsOnHand(0), price(0.0) {}



// Definition for constructor with 3 parametes 
retailItem::retailItem(string detail, int inStock, double cost) {
	description = detail;
	unitsOnHand = inStock;
	price = cost;

}
