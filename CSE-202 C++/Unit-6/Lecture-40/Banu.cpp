#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, pair<int, double>> shoppingCart;

    int choice;
    do {
        // cout << "Enter choice (1: Add Item, 2: Update Quantity, 3: View Total Bill, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string itemName;
                int quantity;
                double price;

                // cout << "Enter item name: ";
                cin >> itemName;
                // cout << "Enter quantity: ";
                cin >> quantity;
                // cout << "Enter price: ";
                cin >> price;

                shoppingCart[itemName].first += quantity;
                shoppingCart[itemName].second = price;

                // cout << itemName << " (Quantity: " << quantity << ") added to the cart." << endl;
                break;
            }

            case 2: {
                string itemName;
                int newQuantity;

                // cout << "Enter item name: ";
                cin >> itemName;
                // cout << "Enter new quantity: ";
                cin >> newQuantity;

                if (shoppingCart.find(itemName) != shoppingCart.end()) {
                    shoppingCart[itemName].first = newQuantity;
                    // cout << "Quantity of " << itemName << " updated to " << newQuantity << "." << endl;
                } else {
                    cout << "Item not found in the cart." << endl;
                }
                break;
            }

            case 3: {
                double totalBill = 0.0;

                for (const auto& item : shoppingCart) {
                    totalBill += item.second.first * item.second.second;
                }
                cout << "Total Bill: " << totalBill << endl;
                break;
            }

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

      int b=0;
    if(b==-1){
        cout<<"class  vector ";
    }

    return 0;
}
