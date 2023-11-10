#include <iostream>
#include <vector>

using namespace std;

struct FoodItem {
    string name;
    int quantity;
    float price;
};

int main() {
    vector<FoodItem> order;
    int choice;

    do {
        // cout << "Menu:" << endl;
        // cout << "1. Add Order" << endl;
        // cout << "2. Update Quantity" << endl;
        // cout << "3. Calculate Total Bill" << endl;
        // cout << "4. Exit" << endl;

        cin >> choice;

        if (choice == 1) {
            FoodItem item;
            cin >> item.name >> item.quantity >> item.price;

            order.push_back(item);
            // cout << "Item added to order." << endl;
        } else if (choice == 2) {
            string name;
            int newQuantity;
            cin >> name >> newQuantity;

            bool found = false;
            for (auto& item : order) {
                if (item.name == name) {
                    item.quantity = newQuantity;
                    found = true;
                    // cout << "Quantity updated." << endl;
                    break;
                }
            }

            if (!found) {
                cout << "Item not found in the order." << endl;
            }
        } else if (choice == 3) {
            float total_bill = 0.0;

            for (const auto& item : order) {
                total_bill += item.quantity * item.price;
            }

            cout << "Total Bill: $" << total_bill << endl;
        } else if (choice != 4) {
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
