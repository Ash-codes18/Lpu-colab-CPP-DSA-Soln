#include <iostream>

void reverseNumber(int &num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    num = reversed;
}

int main() {
    int N;
    std::cin >> N;
    reverseNumber(N);
    std::cout << N << std::endl;
    return 0;
}
