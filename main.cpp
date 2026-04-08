#include <iostream>
#include "include/MenuItem.h"
#include "include/Order.h"
#include "include/Customer.h"

using namespace std;

int main() {
    cout << "==========================================\n";
    cout << "  Welcome to Fuuast Cafe!\n";
    cout << "==========================================\n\n";

    // 1. Create Menu Items
    MenuItem biryani("Chicken Biryani", 450.0);
    MenuItem karahi("Mutton Karahi", 1200.0);
    MenuItem kebab("Seekh Kebab", 350.0);
    MenuItem lassi("Sweet Lassi", 150.0);

    // 2. Create a Customer
    Customer customer("Ahmad");

    // 3. Add items to order
    customer.addOrderItem(biryani);
    customer.addOrderItem(karahi);
    customer.addOrderItem(kebab);

    // 4. Display order
    customer.displayOrder();

    // 5. Remove an item
    customer.removeOrderItem("Seekh Kebab");

    // 6. Display updated order and checkout
    customer.checkout();

    return 0;
}
