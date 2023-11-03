#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxHeapSize = 100;

void minHeapify(vector<int>& minHeap, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < minHeap.size() && minHeap[left] < minHeap[smallest])
        smallest = left;

    if (right < minHeap.size() && minHeap[right] < minHeap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(minHeap[i], minHeap[smallest]);
        minHeapify(minHeap, smallest);
    }
}

void insertIntoMinHeap(vector<int>& minHeap, int requestTime) {
    minHeap.push_back(requestTime);
    int currentIdx = minHeap.size() - 1;

    while (currentIdx > 0 && minHeap[(currentIdx - 1) / 2] > minHeap[currentIdx]) {
        swap(minHeap[currentIdx], minHeap[(currentIdx - 1) / 2]);
        currentIdx = (currentIdx - 1) / 2;
    }
}

int main() {
    vector<int> minHeap;

    int requestTime;
    while (cin >> requestTime) {
        if (minHeap.size() < maxHeapSize) {
            insertIntoMinHeap(minHeap, requestTime);
        }
    }

     for (int i = 0; i < minHeap.size(); i++) {
                cout << minHeap[i] << " ";
            }

    return 0;
}
