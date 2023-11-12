#include <stdio.h>

int main() {
    int tableSize = 10;
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
        int index = keys[i] % tableSize;
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize; // Linear probing
        }
        hashTable[index] = keys[i];
    }

    int f = -1, l = -1;
    int f_index = -1, l_index = -1;
    
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) {
            if (f == -1) {
                f = l = hashTable[i];
                f_index = l_index = i;
            } else {
                if (i < f_index) {
                    f = hashTable[i];
                    f_index = i;
                }
                if (i > l_index) {
                    l = hashTable[i];
                    l_index = i;
                }
            }
        }
    }
    
    if (f != -1 && l != -1) {
        printf("First index: %d, Value: %d\n", f_index, f);
        printf("Last index: %d, Value: %d\n", l_index, l);
    } 
    
    return 0;
}
