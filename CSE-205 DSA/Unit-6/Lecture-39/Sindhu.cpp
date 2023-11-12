#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> linear_probing_hash(const vector<int>& keys, int size) {
    vector<pair<int, int>> hash_table(size, {-1, -1});

    for (int key : keys) {
        int index = key % size;
        while (hash_table[index].first != -1) {
            index = (index + 1) % size;
        }
        hash_table[index] = {key, index};
    }

    return hash_table;
}

void display_hash_table(const vector<pair<int, int>>& hash_table) {
    vector<pair<int, int>> sorted_keys = hash_table;
    sort(sorted_keys.begin(), sorted_keys.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for (const auto& entry : sorted_keys) {
        if (entry.first != -1) {
            cout << "index: " << entry.second << ", value: " << entry.first << endl;
        }
    }
}

int main() {
    // Input
    int size, n;
    cin >> size >> n;
    vector<int> keys(n);
    for (int i = 0; i < n; ++i) {
        cin >> keys[i];
    }

    // Hashing with linear probing
    vector<pair<int, int>> hash_table = linear_probing_hash(keys, size);

    // Displaying output
    display_hash_table(hash_table);

    return 0;
}
