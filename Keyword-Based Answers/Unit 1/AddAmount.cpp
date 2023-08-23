#include <iostream>
using namespace std;

class AddAmount {
public:
    int balance;

    AddAmount() {
        balance = 50;
    }
    
    void deposit(int amount) {
        balance += amount;
    }
    
    void printBalance() {
        cout << balance;
    }
};

int main() {
    AddAmount account;
    int depositAmount;
    
    cin >> depositAmount; 
    account.deposit(depositAmount); 
    account.printBalance();
    
    return 0;
}