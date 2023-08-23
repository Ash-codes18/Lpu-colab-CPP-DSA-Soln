#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void generatePrimesInRange(int& start, int& end) {
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
}

int main() {
    int start, end;
    cin >> start >> end;

    generatePrimesInRange(start, end);

    return 0;
}
