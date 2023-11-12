#include <iostream>
#include <vector>

using namespace std;

int mid_square_hash(int key, int table_size) {
    int square = key * key;
    int middle_digits = (square / 10) % 100;
    return middle_digits % table_size;
}

vector<int> linear_probing_hash(const vector<int>& keys, int table_size) {
    vector<int> hash_table(table_size, -1);

    for (int key : keys) {
        int index = mid_square_hash(key, table_size);

        while (hash_table[index] != -1) {
            index = (index + 1) % table_size;
        }

        hash_table[index] = key;
    }

    return hash_table;
}

void display_hash_table(const vector<int>& hash_table) {
    for (int index = 0; index < hash_table.size(); ++index) {
        if (hash_table[index] != -1) {
            cout << "Index " << index << ": Key " << hash_table[index] << endl;
        }
    }
}

int main() {
    // Input
    int n;
    cin >> n;
    vector<int> keys(n);
    for (int i = 0; i < n; ++i) {
        cin >> keys[i];
    }
    const int TABLE_SIZE = 100;

    // Hashing with mid-square and linear probing
    vector<int> hash_table = linear_probing_hash(keys, TABLE_SIZE);

    // Displaying output
    display_hash_table(hash_table);

    return 0;
}
