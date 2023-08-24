#include <iostream>

unsigned long long fibonacci(int num);

unsigned long long fibonacci(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int num;
    unsigned long long fib;
    std::cin >> num;
    fib = fibonacci(num);
    std::cout << fib;

    return 0;
}
