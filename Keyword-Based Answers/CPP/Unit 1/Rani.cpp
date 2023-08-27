#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << std::setw(2) << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
