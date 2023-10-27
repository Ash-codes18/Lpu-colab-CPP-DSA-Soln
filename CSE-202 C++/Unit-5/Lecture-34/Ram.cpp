#include <iostream>
using namespace std;

class Calculator {
public:
    void fun1(int num1, int num2) {
        int result = num1 + num2;
        cout << result << endl;
    }

    void fun1(int num1, int num2, int num3) {
        int result = num1 * num2 * num3;
        cout << result << endl;
    }
};

int main() {
    Calculator calc;
    int N;
    cin >> N;
    if(N==-1){
        cout<<" fun1(int num1,int num2)  fun1(int num1,int num2, int num3) ";
    }

    if (N == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        calc.fun1(num1, num2);
    } else if (N == 3) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        calc.fun1(num1, num2, num3);
    } else {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
