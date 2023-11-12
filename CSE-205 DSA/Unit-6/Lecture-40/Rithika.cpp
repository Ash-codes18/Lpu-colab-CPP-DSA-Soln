#include <iostream>
using namespace std;

int midSquareHash(int key, int tableSize) {
    int squared = key * key;
    int middleDigit = (squared / 10) % 100;  // Extracting the last two digits
    int hashIndex = middleDigit % tableSize;
    return hashIndex;
}

int main() {
    int tableSize = 100;
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
        int r = 0; // Linear probing counter
        int hashIndex = midSquareHash(key, tableSize);

        // Find the next available slot using linear probing
        while (hashTable[hashIndex] != -1) {
            r++;
            hashIndex = (midSquareHash(key, tableSize) + r) % tableSize;
        }

        // Store the key in the hash table
        hashTable[hashIndex] = key;
    }

    // Find the key with the highest value and its index
    int maxWeight = hashTable[0];
    int maxIndex = 0;

    for (int i = 1; i < tableSize; i++) {
        if (hashTable[i] != -1 && hashTable[i] > maxWeight) {
            maxWeight = hashTable[i];
            maxIndex = i;
        }
    }

    // Print the result
    cout << "Weight: " << maxWeight << ", Index: " << maxIndex << endl;

    return 0;
}