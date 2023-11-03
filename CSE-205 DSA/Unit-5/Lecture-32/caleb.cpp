#include <iostream>
using namespace std;

struct Process {
    int executionTime;
};

void swap(Process& a, Process& b) {
    Process temp = a;
    a = b;
    b = temp;
}

// Function to insert a new process into the min heap
void insertProcess(Process heap[], int& heapSize, Process newProcess) {
    heapSize++;

    int i = heapSize - 1;
    heap[i] = newProcess;

    while (i > 0 && heap[(i - 1) / 2].executionTime > heap[i].executionTime) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(Process heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].executionTime << " ";
    }
    cout << endl;
}

int main() {
    Process minHeap[100];
    int heapSize = 0;

    while (true) {
        Process newProcess;
        if (!(cin >> newProcess.executionTime)) {
            break;
        }

        insertProcess(minHeap, heapSize, newProcess);
    }
    printHeap(minHeap, heapSize);

    return 0;
}
