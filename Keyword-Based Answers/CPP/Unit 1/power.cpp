#include <iostream>
using namespace std;

void power(int& base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    base = result;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;

    power(base, exponent);

    cout << base << endl;

    return 0;
}
