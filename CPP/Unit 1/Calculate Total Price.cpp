#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalPrice(double price) {
    return price;
}

double calculateTotalPrice(double price, int quantity) {
    return price * quantity;
}

double calculateTotalPrice(double price, int quantity, double discountPercentage) {
    double total = price * quantity;
    double discountAmount = total * (discountPercentage / 100);
    return total - discountAmount;
}

int main() {
    int choice;
    while (true) {
        cin >> choice;

        if (choice == 1) {
            double price;
            cin >> price;
            cout << fixed << setprecision(2) << calculateTotalPrice(price) << endl;
        } else if (choice == 2) {
            double price;
            int quantity;
            cin >> price >> quantity;
            cout << fixed << setprecision(2) << calculateTotalPrice(price, quantity) << endl;
        } else if (choice == 3) {
            double price, discountPercentage;
            int quantity;
            cin >> price >> quantity >> discountPercentage;
            cout << fixed << setprecision(2) << calculateTotalPrice(price, quantity, discountPercentage) << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
