#include <iostream>
using namespace std;

int main() {
    
    int tableSize = 10;
    int numKeys,i;
    cin >> numKeys;
    int keys[numKeys];
    for ( i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }
    int hashTable[tableSize];
    for ( i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }
    for ( i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = key % tableSize;
        int j = 0;
        while (hashTable[hashIndex] != -1) 
        {
            j++;
            hashIndex = (hashIndex + j * j) % tableSize;
        }
        hashTable[hashIndex] = key;
    }
    for ( i = 0; i < tableSize; i++) {
        if(hashTable[i]!=-1)
        cout << hashTable[i] << " ";
    }
}