#include <iostream>
using namespace std;

class Integer {
public:
    int value;

    Integer(int x) {
        value = x;
    }
};

class Euclids {
private:
    Integer num1;
    Integer num2;

public:
    Euclids(Integer a, Integer b) : num1(a), num2(b) {}

    Integer computeGCD() {
        if (num1.value <= 0 || num2.value <= 0) {
            return Integer(0);
        }

        int remainder = num1.value % num2.value;

        while (remainder != 0) {
            num1.value = num2.value;
            num2.value = remainder;
            remainder = num1.value % num2.value;
        }

        return num2;
    }

    void display() {
        cout << num1.value << " " << num2.value << endl;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Integer i1(n1);
    Integer i2(n2);

    Euclids e1(i1, i2);

    e1.display();
    cout << e1.computeGCD().value << endl;

    return 0;
}