// You are using GCC
#include <iostream>
using namespace std;

int SIZE = 100;

int calHash(int key, int size) {
    return key % size;
}

int main() {
    int size, numKeys;
    cin >> size;
    cin >> numKeys;

    int keys[numKeys];
    int hashTable[SIZE];

    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    for (int i = 0; i < numKeys; ++i) {
        cin >> keys[i];
    }

    for (int i = 0; i < numKeys; ++i) {
        int hashIndex = calHash(keys[i], size);

        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % size;
        }

        hashTable[hashIndex] = i;

        if (i < numKeys - 1) {
            cout << hashIndex << " ";
        } else {
            cout << hashIndex << endl;
        }
    }

    return 0;
}