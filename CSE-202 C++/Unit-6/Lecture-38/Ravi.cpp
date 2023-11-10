#include <iostream>
#include <exception>
using namespace std;

class NegativeDepositException : public exception {
public:
    const char* what() const throw() {
        return "Error: Cannot deposit a negative amount or zero.";
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        balance = 0.0;
    }

    double deposit(double amount) {
        if (amount <= 0) {
            throw NegativeDepositException();
        }
        balance += amount;
        return balance;
    }
};

int main() {
    try {
        double deposit_amount;
        cin >> deposit_amount;

        BankAccount account;
        double balance = account.deposit(deposit_amount);
        cout << "Deposit successful. Balance: " << balance << endl;
    }
    catch (NegativeDepositException& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
