#include <iostream>
#include <string>
#include <vector> 

using namespace std;

struct CustomerData {
        string name;
            int accountNumber;
                int balance;
};

union Customers {
      CustomerData* customerDataPtr; 
      int balanceArray[3]; 
};
void increment_balance(Customers c[], int n) {
        for (int i = 0; i < n; i++) {
        if (c[i].customerDataPtr->balance > 1000) {
        c[i].customerDataPtr->balance += 100;
        cout << c[i].customerDataPtr->balance << " ";
                    }
        }
}
int main() {
    int N;
    cin >> N;
    Customers customerArray[N];
    for (int i = 0; i < N; i++) {
    customerArray[i].customerDataPtr = new CustomerData; 
    cin >> customerArray[i].customerDataPtr->name >> customerArray[i].customerDataPtr->accountNumber >> customerArray[i].customerDataPtr->balance;
}
    increment_balance(customerArray, N);
   for (int i = 0; i < N; i++) {
   delete customerArray[i].customerDataPtr;
}
                                
    return 0;
}

//Sushant