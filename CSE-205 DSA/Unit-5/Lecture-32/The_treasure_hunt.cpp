#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> treasures(n);

    for (int i = 0; i < n; i++) {
        std::cin >> treasures[i];
    }

    // Convert the vector into a min-heap
    std::make_heap(treasures.begin(), treasures.end(), std::greater<int>());

    // Print the min-heap
    for (int i = 0; i < n; i++) {
        std::cout << treasures[i];
        if (i < n - 1) {
            std::cout << ' ';
        }
    }

    return 0;
}
