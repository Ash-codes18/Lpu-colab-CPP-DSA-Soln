#include <iostream>
using namespace std;

int midSquareHash(int key, int tableSize) 
{
    int squared = key * key;
    int middleDigit = (squared / 10) % 10; 
    int hashIndex = middleDigit % tableSize;
    return hashIndex;
}

int main() {
    int tableSize = 100, in, min; 
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
        int hashIndex = midSquareHash(key, tableSize);
        
        while (hashTable[hashIndex] != -1) {
            hashIndex = (hashIndex + 1) % tableSize;
        }
        hashTable[hashIndex] = key;
    }
    
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            cout << "Index: " << i << ", Value: " << hashTable[i] << endl;
        }
    }

    int minElement = -1;  
    int minIndex = -1;

    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            if (minElement == -1 || hashTable[i] < minElement) {
                minElement = hashTable[i];
                minIndex = i;
            }
        }
    }

    if (minIndex != -1) {
        cout << "Lowest Fee: " << minElement << " Index " << minIndex;
    } 

    return 0;
}
