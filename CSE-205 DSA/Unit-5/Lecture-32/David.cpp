#include <iostream>
using namespace std;

struct Location {
    int distance;
};

void swap(Location& a, Location& b) {
    Location temp = a;
    a = b;
    b = temp;
}

void insertLocation(Location heap[], int& heapSize, Location newLocation) {
    if (heapSize == 0) {
        heap[0] = newLocation;
    } else {
        int current = heapSize;
        heap[heapSize] = newLocation;

        while (current > 0 && heap[current].distance < heap[(current - 1) / 2].distance) {
            swap(heap[current], heap[(current - 1) / 2]);
            current = (current - 1) / 2;
        }
    }

    heapSize++;
}

int main() {
    Location minHeap[100];
    int heapSize = 0;

    while (true) {
        Location newLocation;
        if (!(cin >> newLocation.distance)) {
            break;
        }
        if (heapSize < 100) {
            insertLocation(minHeap, heapSize, newLocation);
        } else {
            cout << "Heap is full. Cannot insert more locations." << endl;
        }
    }

    // Print the distances of delivery locations stored in the min-heap
    for (int i = 0; i < heapSize; i++) {
        cout << minHeap[i].distance;
        if (i < heapSize - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
