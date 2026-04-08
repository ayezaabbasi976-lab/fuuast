#include "../include/MenuItem.h"
#include <iostream>

using namespace std;

MenuItem::MenuItem(string name, double price) : name(name), price(price) {}

void MenuItem::display() const {
    cout << name << " - PKR " << price << endl;
}

double MenuItem::getPrice() const {
    return price;
}

string MenuItem::getName() const {
    return name;
}
