// You are using GCC
#include <iostream>
using namespace std;
#define SIZE 100

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

    int minIndices[numKeys];
    
    for (int i = 0; i < numKeys; ++i) {
        int index = calHash(keys[i], size);

        while (hashTable[index] != -1) {
            index = (index + 1) % size;
        }

        hashTable[index] = keys[i];
        minIndices[i] = index;
    }

    for (int i = 0; i < numKeys; ++i) {
        for (int j = i + 1; j < numKeys; ++j) {
            if (minIndices[i] > minIndices[j]) {
                swap(minIndices[i], minIndices[j]);
                swap(keys[i], keys[j]);
            }
        }
    }

    for (int i = 0; i < numKeys; ++i) {
        cout << "index: " << minIndices[i] << ", value: " << keys[i] << endl;
    }

    return 0;
}