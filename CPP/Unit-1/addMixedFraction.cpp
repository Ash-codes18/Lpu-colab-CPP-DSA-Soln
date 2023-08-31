#include <iostream>
#include <algorithm>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    friend Fraction addMixedFraction(const Fraction& f1, const Fraction& f2) {
        int num1 = f1.numerator;
        int den1 = f1.denominator;
        int num2 = f2.numerator;
        int den2 = f2.denominator;

        int commonDenominator = den1 * den2;
        int sumNumerator = (num1 * den2) + (num2 * den1);

        int gcd = __gcd(sumNumerator, commonDenominator);

        Fraction result(sumNumerator / gcd, commonDenominator / gcd);
        return result;
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    int num1, den1, num2, den2;
    cin >> num1 >> den1 >> num2 >> den2;

    Fraction fraction1(num1, den1);
    Fraction fraction2(num2, den2);

    Fraction sum = addMixedFraction(fraction1, fraction2);
    sum.display();

    return 0;
}
