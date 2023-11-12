// You are using GCC
#include <iostream>
using namespace std;

int divisionMethod(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    int tableSize = 10;
    int numKeys;
    cin >> numKeys;
    int keys[numKeys];

    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = divisionMethod(key, tableSize);

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize; // Linear probing
        }

        hashTable[hashIndex] = key;
    }

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1 && i % 2 == 0) {
            cout << "Index: " << i << " Flight ID: " << hashTable[i] << endl;
        }
    }

    return 0;
}