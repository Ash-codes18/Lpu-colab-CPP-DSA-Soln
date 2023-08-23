
int sumOfDigits(int num);

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
        if (num == 0) {
                    return 0;
        } else {
                    return num % 10 + sumOfDigits(num / 10);
        }
}

int main() {
        int n;
            cin >> n;
            
                if (n <= 0 || n > 1000000) {
                            cout << "Invalid input\n";
                } else {
                            int result = sumOfDigits(n);
                                    cout << result << "\n";
                }
                
                    return 0;
}
