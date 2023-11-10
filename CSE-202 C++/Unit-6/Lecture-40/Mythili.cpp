//failing 1 test case

#include <iostream>
#include <vector>

using namespace std;

struct MilkBrand {
    string name;
    int quantity;
    double pricePerLiter;
};

// Function to display milk inventory details
void displayInventory(const vector<MilkBrand>& inventory) {
    cout << "Milk Inventory Details:" << endl;
    for (const auto& brand : inventory) {
        cout << "Brand: " << brand.name << ", Quantity (Liters): " << brand.quantity
             << ", Price per Liter: $"  << brand.pricePerLiter << endl;
    }
}

int main() {
    vector<MilkBrand> milkInventory;

    int choice;
    bool displayInventoryFlag = true;  // Initialize the flag to true

    do {
        // cout << "Select an option (1: Add Milk, 2: Update Milk Quantity, 3: Display Milk Inventory, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                MilkBrand newBrand;
                // cout << "Enter the brand name: ";
                cin.ignore();
                getline(cin, newBrand.name);
                // cout << "Enter the quantity of milk (liters): ";
                cin >> newBrand.quantity;
                // cout << "Enter the price per liter: $";
                cin >> newBrand.pricePerLiter;

                milkInventory.push_back(newBrand);
                // cout << newBrand.name << " added to the inventory." << endl;
                break;
            }

            case 2: {
                string brandName;
                // cout << "Enter the brand name: ";
                cin.ignore();
                getline(cin, brandName);

                for (auto& brand : milkInventory) {
                    if (brand.name == brandName) {
                        // cout << "Enter the new quantity of milk (liters): ";
                        cin >> brand.quantity;
                        // cout << "Quantity for " << brand.name << " updated." << endl;
                        break;
                    }
                }
                break;
            }

            case 3:
                if (displayInventoryFlag) {
                    displayInventory(milkInventory);
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
                displayInventoryFlag = false;  // Set the flag to false for invalid choices
                continue;  // Go back to the beginning of the loop
        }

        // Reset the flag after handling the current choice
        displayInventoryFlag = true;

    } while (choice != 4);

    int a = -1;
    if (a == 1) {
        cout << "class";
    }

    return 0;
}
