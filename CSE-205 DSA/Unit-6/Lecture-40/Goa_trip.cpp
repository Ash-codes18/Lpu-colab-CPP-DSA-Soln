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
        int j = 0;
        while (hashTable[hashIndex] != -1) {
            j++;
            hashIndex = (hashIndex + j * j) % tableSize;
        }
        hashTable[hashIndex] = key;
    }
    int f = 0;
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1 && hashTable[i] >= 60) {
            cout << "Age: " << hashTable[i] <<", Seat: " << i <<"\n";
            f = 1;
        }
    }
    if (f == 0) {
        cout << "No senior citizens in the family";
    }
    return 0;
}