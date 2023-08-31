#include <iostream>
using namespace std;

void fun1(int num1,int num2) {
    cout << num1 + num2 << endl;
}

void fun1(int num1,int num2,int num3) {
    cout << num1 * num2 * num3 << endl;
}

int main() {
    int N;
    cin >> N;

    if (N == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        fun1(num1, num2);
    } else if (N == 3) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        fun1(num1, num2, num3);
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
