// You are using GCC
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> stockPrices;
    int input;

    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        stockPrices.push_back(input);
    }

    if (stockPrices.empty()) {
        cout << "Deque is empty" << endl;
    } else {
        int minPrice = stockPrices.front();
        for (int price : stockPrices) {
            if (price < minPrice) {
                minPrice = price;
            }
        }
        cout << minPrice << endl;
    }

    return 0;
}