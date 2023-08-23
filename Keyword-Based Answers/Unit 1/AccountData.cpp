#include <iostream>
#include <string>

struct AccountInfo {
    std::string holderName;
    int accountNumber;
    double balance;
};

struct AccountData {
    AccountInfo info;
};

void deposit(AccountData& account, double amount) {
    account.info.balance += amount;
    std::cout << "Amount deposited successfully." << std::endl;
}

void withdraw(AccountData& account, double amount) {
    if (account.info.balance >= amount) {
        account.info.balance -= amount;
        std::cout << "Amount withdrawn successfully." << std::endl;
    } else {
        std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
    }
}

int main() {
    AccountData account;

    std::getline(std::cin, account.info.holderName);
    std::cin >> account.info.accountNumber;
    std::cin >> account.info.balance;

    double depositAmount, withdrawAmount;
    std::cin >> depositAmount >> withdrawAmount;

    deposit(account, depositAmount);
    withdraw(account, withdrawAmount);

    std::cout << "Account details:" << std::endl;
    std::cout << "Account holder's name: " << account.info.holderName << std::endl;
    std::cout << "Account number: " << account.info.accountNumber << std::endl;
    std::cout << "Balance: " << account.info.balance << std::endl;

    return 0;
}
//sushant
