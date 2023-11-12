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

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = key % tableSize;

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize;
        }

        hashTable[hashIndex] = key;
    }

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << "Seat Number " << i << ": Ticket ID " << hashTable[i] << endl;
        }
    }

    return 0;
}
