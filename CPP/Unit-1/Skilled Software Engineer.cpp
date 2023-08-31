#include <iostream>

const int MAX_SIZE = 100;

void filterNegativePrices(double prices[], int size) {
    int positiveSize = 0;
    double positivePrices[MAX_SIZE];

    for (int i = 0; i < size; i++) {
        if (prices[i] >= 0) {
            positivePrices[positiveSize++] = prices[i];
        }
    }

    std::cout << "Updated Array with Positive Closing Prices: ";
    for (int i = 0; i < positiveSize; i++) {
        std::cout << positivePrices[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    double prices[MAX_SIZE];
    int size;

    std::cin >> size;

    for (int i = 0; i < size; i++) {
        std::cin >> prices[i];
    }

    filterNegativePrices(prices, size);

    return 0;
}
