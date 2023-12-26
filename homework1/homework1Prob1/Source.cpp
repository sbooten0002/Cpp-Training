#include"retailItem.h"
#include<iostream>
#include<string>

using namespace std;

int main() {

    //RetailItem objects
    RetailItem item1("Books", 100, 12.99);
    RetailItem item2("Cardigans",70, 25.99);
    RetailItem item3("Coffee Mugs", 60, 9.99);

    cout << "Item 1: " << item1.getDescription() << ", Units: " << item1.getUnitsOnHand() << ", Price: $" << item1.getPrice() << endl;
    cout << "Item 2: " << item2.getDescription() << ", Units: " << item2.getUnitsOnHand() << ", Price: $" << item2.getPrice() << endl;
    cout << "Item 3: " << item3.getDescription() << ", Units: " << item3.getUnitsOnHand() << ", Price: $" << item3.getPrice() << endl;

    return 0;

}