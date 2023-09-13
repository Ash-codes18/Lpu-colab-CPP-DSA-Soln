// You are tasked with creating a simple banking application that allows
// users to manage their bank accounts using this pointer.The application
// should provide the following functionalities :
// 100% Accuracy

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string accountNumber;
    double balance;

    void createAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            return true;
        }
        else
        {
            return false;
        }
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account1, account2;
    string accNum1, accNum2;
    double initialBalance1, initialBalance2, depositAmount, withdrawAmount;

    // Input for account 1
    cin >> accNum1 >> initialBalance1;

    // Input for account 2
    cin >> accNum2 >> initialBalance2;

    // Create accounts
    account1.createAccount(accNum1, initialBalance1);
    account2.createAccount(accNum2, initialBalance2);

    // Deposit into account 1
    cin >> depositAmount;
    account1.deposit(depositAmount);

    // Withdraw from account 2
    cin >> withdrawAmount;
    if (!account2.withdraw(withdrawAmount))
    {
        cout << "Insufficient balance in account " << account2.accountNumber << endl;
    }

    // Display balances
    cout << "Account " << account1.accountNumber << " has a balance of: " << account1.getBalance() << endl;
    cout << "Account " << account2.accountNumber << " has a balance of: " << account2.getBalance() << endl;

    return 0;
}
