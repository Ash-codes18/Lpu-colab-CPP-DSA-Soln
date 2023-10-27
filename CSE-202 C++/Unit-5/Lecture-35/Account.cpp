#include <iostream>
using namespace std;

class Account {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double getBalance() = 0;
};

class SavingsAccount : public Account {
private:
    double balance;

public:
    SavingsAccount() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    SavingsAccount savingsAccount;
    int choice;
    double amount;

    while (true) {
        cin >> choice;

        if (choice == 1) {
            cin >> amount;
            savingsAccount.deposit(amount);
        } else if (choice == 2) {
            cin >> amount;
            savingsAccount.withdraw(amount);
        } else if (choice == 3) {
            cout << "Savings Account Balance: " << savingsAccount.getBalance() << endl;
        } else if (choice == 0) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
