#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int clac(int a) {
    return a * a;
}

int clac(int a, int b) {
    return (a % b);
}

float calc(float a, float b) {
    return a / b;
}

int main() {
    int int1, int2;
    float float1, float2;

    cin >> int1 >> int2 >> float1 >> float2;

    int squareResult = clac(int1);
    int modulusResult = clac(int1, int2);
    float quotientResult = calc(float1, float2);

    cout << "Square of " << int1 << ": " << squareResult << endl;
    cout << "Modulus of " << int1 << ", " << int2 << ": " << modulusResult << endl;
    cout << "Quotient of " << float1 << ", " << float2 << ": " << fixed<<setprecision(2) << quotientResult << endl;

    return 0;
}
