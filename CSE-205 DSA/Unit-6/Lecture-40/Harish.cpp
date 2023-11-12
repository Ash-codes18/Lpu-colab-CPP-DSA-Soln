#include <iostream>
using namespace std;

int myHash(int key, int tableSize) {
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
        int hashIndex = myHash(key, tableSize); 

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize;
        }

        hashTable[hashIndex] = key;
    }

    int mid = (numKeys / 2) + 1;
    int middleIndex, middleValue;
    int c = 0;

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            c++;
            if (c == mid) {
                middleIndex = i;
                middleValue = hashTable[i];
            }
            cout << "Index " << i << ": " << hashTable[i] << endl;
        }
    }

    cout << "Middle Index: " << middleIndex << ", Middle Value: " << middleValue;

    return 0;
}
