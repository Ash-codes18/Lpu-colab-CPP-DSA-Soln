#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int tableSize = 10;
    int numDishes;
    cin >> numDishes;
    vector<int> prices(tableSize, -1);

    for (int i = 0; i < numDishes; i++) {
        int price;
        cin >> price;
        int index = price % tableSize;
        int step = 1;
        while (prices[index] != -1) {
            index = (index + step * step) % tableSize;
            step++;
        }
        prices[index] = price;
    }

    bool found = false;
    for (int i = 0; i < tableSize; i++) {
        if (isPrime(i) && prices[i] != -1) {
            found = true;
            cout << "The price of the dish in prime position: " << i << " is Rs." << prices[i] << endl;
        }
    }

    if (!found) {
        cout << "No dish is placed in prime position" << endl;
    }

    return 0;
}
