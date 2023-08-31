#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> prices(n);
    std::vector<int> thresholds(n);

    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> thresholds[i];
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (std::abs(prices[i + 1] - prices[i]) >= thresholds[i]) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
