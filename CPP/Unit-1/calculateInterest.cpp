#include <iostream>
#include <iomanip>  
using namespace std;

double calculateInterest(double principalAmount, double interestRate) {
    return (principalAmount * interestRate) / 100.0;
}

double calculateInterest(double principalAmount, double interestRate, int years) {
    return (principalAmount * interestRate * years) / 100.0;
}

int main() {
    double principalAmount, interestRate;
    int years;

    cin >> principalAmount >> interestRate >> years;

    double savingsInterest = calculateInterest(principalAmount, interestRate);
    double fixedDepositInterest = calculateInterest(principalAmount, interestRate, years);

    cout << fixed << setprecision(2);

    cout << savingsInterest << endl;
    cout << fixedDepositInterest << endl;

    return 0;
}
