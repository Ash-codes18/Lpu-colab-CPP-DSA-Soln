#include <iostream>
using namespace std;

struct Job {
    int processing_time;
};

void swap(Job& a, Job& b) {
    Job temp = a;
    a = b;
    b = temp;
}

// Function to insert a new job into the binary heap based on processing time
void insertJob(Job heap[], int& heapSize, Job newJob) {
    heapSize++;
    
    int i = heapSize - 1;
    heap[i] = newJob;

    while (i > 0 && heap[(i - 1) / 2].processing_time < heap[i].processing_time) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(Job heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i].processing_time << " ";
    }
    cout << endl;
}

int main() {
    int maxSize = 100; 
    Job jobHeap[maxSize];
    int heapSize = 0;
    
    while (true) {
        Job newJob;
        if (!(cin >> newJob.processing_time)) {
            break;
        }

        insertJob(jobHeap, heapSize, newJob);
    }
    
    printHeap(jobHeap, heapSize);

    return 0;
}