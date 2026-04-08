#include "../include/Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string name) : name(name) {}

void Customer::addOrderItem(const MenuItem& item) {
    order.addItem(item);
    cout << "Added " << item.getName() << " to " << name << "'s order.\n";
}

void Customer::removeOrderItem(const string& itemName) {
    order.removeItem(itemName);
}

void Customer::displayOrder() const {
    cout << "\n--- Order for " << name << " ---\n";
    order.displayOrder();
    cout << "-----------------------\n";
}

void Customer::checkout() const {
    displayOrder();
    cout << "Total Bill: PKR " << order.calculateTotal() << "\n";
    cout << "Thank you for your order, " << name << "!\n\n";
}
