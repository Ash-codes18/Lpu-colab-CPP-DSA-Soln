// You are using GCC
#include <stdio.h>

int midSquareHash(int key, int tableSize)
{
    int squared = key * key;
    int middleDigit = (squared / 10) % 100;
    return middleDigit % tableSize;
}

int linearProbe(int hashTable[], int tableSize, int index)
{
    while (hashTable[index] != -1)
    {
        index = (index + 1) % tableSize;
    }
    return index;
}


int main() {
    int tableSize = 100;
    int numKeys;
    scanf("%d", &numKeys);
    int keys[numKeys];
    for (int i = 0; i < numKeys; i++) {
        scanf("%d", &keys[i]);
    }
    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }
    for (int i = 0; i < numKeys; i++) {
        int key = keys[i];
        int hashIndex = midSquareHash(key, tableSize);

        hashIndex = linearProbe(hashTable, tableSize, hashIndex);

        hashTable[hashIndex] = key;
    }

    int sum = 0;
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: Key %d\n", i, hashTable[i]);
        }
    }
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            if (i % 2 == 0) {
                sum += hashTable[i];
            }
        }
    }
    printf("Sum of even indexed soup price: %d", sum);
}

