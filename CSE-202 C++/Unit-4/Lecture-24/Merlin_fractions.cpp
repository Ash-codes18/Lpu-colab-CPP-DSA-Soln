#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Fraction class
class Fraction {
public:
    int numerator, denominator;
    
    // Constructor
    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }
    
    // Method to reduce the fraction
    void reduce() {
        int common = gcd(abs(numerator), abs(denominator));
        numerator /= common;
        denominator /= common;
    }
};

int main() {
    int num1, denom1, num2, denom2;
    cin >> num1 >> denom1;
    cin >> num2 >> denom2;

    // Create Fraction objects
    Fraction fraction1(num1, denom1);
    Fraction fraction2(num2, denom2);

    // Multiply the fractions
    Fraction result(num1 * num2, denom1 * denom2);

    // Reduce the result
    result.reduce();

    cout << "The result of multiplication is: " << result.numerator << "/" << result.denominator << endl;

    return 0;
}
