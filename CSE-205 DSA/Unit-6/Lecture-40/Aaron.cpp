#include <iostream>
using namespace std;

int divisionMethod(int key, int tableSize)
{
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
        while (hashIndex < tableSize) {
            if (hashTable[hashIndex] == -1) {
                hashTable[hashIndex] = key;
                break;
            } else {
                hashIndex = (hashIndex + 1) % tableSize;
            }
        }
    }
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << "Table number " << i << ": Customer ID " << hashTable[i] << endl;
        }
    }
    return 0;
}
