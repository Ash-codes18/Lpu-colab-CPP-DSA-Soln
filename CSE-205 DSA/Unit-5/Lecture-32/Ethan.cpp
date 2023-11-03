#include <iostream>
#include <vector>

using namespace std;

const int maxHeapSize = 100;

void maxHeapify(vector<int> &maxHeap, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < maxHeap.size() && maxHeap[left] > maxHeap[largest])
        largest = left;

    if (right < maxHeap.size() && maxHeap[right] > maxHeap[largest])
        largest = right;

    if (largest != i) {
        swap(maxHeap[i], maxHeap[largest]);
        maxHeapify(maxHeap, largest);
    }
}

void insertIntoMaxHeap(vector<int> &maxHeap, int task) {
    maxHeap.push_back(task);
    int currentIdx = maxHeap.size() - 1;

    while (currentIdx > 0 && maxHeap[(currentIdx - 1) / 2] < maxHeap[currentIdx]) {
        swap(maxHeap[currentIdx], maxHeap[(currentIdx - 1) / 2]);
        currentIdx = (currentIdx - 1) / 2;
    }
}

int main() {
    vector<int> maxHeap;

    int task;
    while (cin >> task) {
        if (maxHeap.size() < maxHeapSize) {
            insertIntoMaxHeap(maxHeap, task);
           
          
        }
    }

     for (int i = 0; i < maxHeap.size(); i++) {
                cout << maxHeap[i] << " ";
            }

    return 0;
}
