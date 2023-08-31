#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    unordered_map<int, int> inventory;

    for (int i = 0; i < n; ++i) {
        int item;
        cin >> item;
        inventory[item]++;
    }

    cin >> m;

    for (int i = 0; i < m; ++i) {
        int item;
        cin >> item;
        inventory[item]++;
    }

    int totalItems = 0;
    for (const auto& item : inventory) {
        totalItems += item.second;
    }

    cout << totalItems;

    return 0;
}
