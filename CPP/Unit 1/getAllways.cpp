#include <iostream>
#include <cmath>

int getAllWays(int remainingSum, int power, int base);

int getAllWays(int remainingSum, int power, int base) {
    int result = 1;
    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    if (result == remainingSum)
        return 1;

    if (result > remainingSum)
        return 0;

    return getAllWays(remainingSum - result, power, base + 1) + getAllWays(remainingSum, power, base + 1);
}

int main() {
    int x, n;
    std::cin >> x;
    std::cin >> n;

    int ways = getAllWays(x, n, 1);

    std::cout  << ways << std::endl;

    return 0;
}
