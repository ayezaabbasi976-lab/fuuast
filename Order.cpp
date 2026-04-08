#include "../include/Order.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Order::addItem(const MenuItem& item) {
    items.push_back(item);
}

void Order::removeItem(const string& itemName) {
    auto it = find_if(items.begin(), items.end(), 
        [&](const MenuItem& item) { return item.getName() == itemName; });
    
    if (it != items.end()) {
        items.erase(it);
        cout << itemName << " removed from order.\n";
    } else {
        cout << itemName << " not found in order.\n";
    }
}

void Order::displayOrder() const {
    if (items.empty()) {
        cout << "Order is empty.\n";
        return;
    }
    for (const auto& item : items) {
        item.display();
    }
}

double Order::calculateTotal() const {
    double total = 0.0;
    for (const auto& item : items) {
        total += item.getPrice();
    }
    return total;
}
