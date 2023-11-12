#include <iostream>
using namespace std;

int main() {
    int tableSize = 10;
    int numMarks;
    cin >> numMarks;
    int marks[numMarks];

    for (int i = 0; i < numMarks; i++) {
        cin >> marks[i];
    }

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    int bestMark = -1;
    int bestIndex = -1;

    for (int i = 0; i < numMarks; i++) {
        int mark = marks[i];
        int index = mark % tableSize;
        int step = 1;

        while (hashTable[index] != -1) {
            index = (index + step * step) % tableSize;
            step++;
        }

        hashTable[index] = mark;

        if (bestMark == -1 || mark > bestMark) {
            bestMark = mark;
            bestIndex = index;
        }
    }

    cout << "Best Mark: " << bestMark << ", Index: " << bestIndex << endl;

    return 0;
}
