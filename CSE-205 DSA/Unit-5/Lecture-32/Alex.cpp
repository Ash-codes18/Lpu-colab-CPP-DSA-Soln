#include <iostream>
using namespace std;

struct Bid {
    int bid_amount;
};

void swap(Bid& a, Bid& b) {
    Bid temp = a;
    a = b;
    b = temp;
}

void insertBid(Bid heap[], int& heapSize, Bid newBid) {
    if (heapSize == 0) {
        heap[0] = newBid;
    } else {
        int current = heapSize;
        heap[heapSize] = newBid;

        while (current > 0 && heap[current].bid_amount > heap[(current - 1) / 2].bid_amount) {
            swap(heap[current], heap[(current - 1) / 2]);
            current = (current - 1) / 2;
        }
    }

    heapSize++;
}

int main() {
    int maxSize = 100;
    Bid binaryHeap[maxSize];
    int heapSize = 0;

    while (true) {
Bid newBid;
        if (!(cin >> newBid.bid_amount)) {
            break;
        }
        if (heapSize < maxSize) {
            insertBid(binaryHeap, heapSize, newBid);
        } else {
            cout << "Heap is full. Cannot insert more bids." << endl;
        }
    }

    // Print the final state of the heap
    for (int i = 0; i < heapSize; i++) {
        cout << binaryHeap[i].bid_amount;
        if (i < heapSize - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
