#include <iostream>
using namespace std;

int divisionMethod(int key, int tableSize) 
{
    return key % tableSize;
}

int main() {
    int tableSize = 10;
    int numKeys, k;
    cin >> numKeys;

    int keys[numKeys];
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }

    cin >> k;

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = divisionMethod(key, tableSize);

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize; 
        }

        hashTable[hashIndex] = key;
    }

    int c = 0;
    int kIndex = -1;
    int kValue = -1;

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            if (c == k - 1) {
                kIndex = i;
                kValue = hashTable[i];
            }

            cout << "Index " << i << ": Value " << hashTable[i] << endl;
            c++;
        }
    }

    if (kIndex != -1) {
        cout << "Kth Position Index: " << kIndex << ", Kth Position Value: " << kValue;
    } else {
        cout << "Kth position not found";
    }

    return 0;
}
