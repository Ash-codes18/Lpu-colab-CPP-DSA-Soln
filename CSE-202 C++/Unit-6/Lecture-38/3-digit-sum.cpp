#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==-1){
        cout<<"try catch throw";
    }

    if (n < 100 || n > 999) {
        cout << "It's not a three digit Number or valid number";
    }
    else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        cout << "Sum of the digits is " << sum;
    }

    return 0;
}
