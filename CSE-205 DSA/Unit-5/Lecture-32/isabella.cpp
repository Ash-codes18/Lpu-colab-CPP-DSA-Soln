#include <iostream>
using namespace std;

struct Job {
    int priority;
};

void swap(Job& a, Job& b) {
    Job temp = a;
    a = b;
    b = temp;
}

// Function to insert a new job into the min heap based on priority
void insertJob(Job heap[], int& heapSize, int newJobPriority) {
    heapSize++;

    int i = heapSize - 1;
    heap[i].priority = newJobPriority;

    while (i > 0 && heap[(i - 1) / 2].priority > heap[i].priority) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(Job heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].priority << " ";
    }
    cout << endl;
}

int main() {
    Job minHeap[100];
    int heapSize = 0;

    while (true) {
        int newJobPriority;
        if (!(cin >> newJobPriority)) {
            break;
        }

        insertJob(minHeap, heapSize, newJobPriority);
    }

    printHeap(minHeap, heapSize);

    return 0;
}