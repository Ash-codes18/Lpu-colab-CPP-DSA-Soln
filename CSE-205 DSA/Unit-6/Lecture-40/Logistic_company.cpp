#include <iostream>
using namespace std;

int main() {
    int tableSize = 10;
    int numKeys;
    cin >> numKeys;
    int keys[numKeys];
    
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }

    int hashTable[tableSize] = {0};
    
    int maxCapacity = keys[0];
    int maxIndex = keys[0] % tableSize; // Initialize with the hash index of the first truck

    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = key % tableSize;
        int probeCount = 1;
        
        while (hashTable[hashIndex] != 0) {
            hashIndex = (hashIndex + probeCount * probeCount) % tableSize;
            probeCount++;
        }

        hashTable[hashIndex] = key;

        if (keys[i] > maxCapacity) {
            maxCapacity = keys[i];
            maxIndex = hashIndex; // Use the final hash index after insertion
        }
    }

    cout << "The lorry that has high load capacity is in index " << maxIndex << ".";

    return 0;
}