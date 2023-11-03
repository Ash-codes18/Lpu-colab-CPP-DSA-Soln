#include <iostream>
#include <vector>

using namespace std;

void maxHeapify(vector<int>& maxHeap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && maxHeap[left] > maxHeap[largest])
        largest = left;

    if (right < n && maxHeap[right] > maxHeap[largest])
        largest = right;

    if (largest != i) {
        swap(maxHeap[i], maxHeap[largest]);
        maxHeapify(maxHeap, n, largest);
    }
}

void buildMaxHeap(vector<int>& maxHeap) {
    int n = maxHeap.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(maxHeap, n, i);
    }
}

void removeElementsGreaterThanThreshold(vector<int>& maxHeap, int threshold) {
    vector<int> newHeap;
    for (int num : maxHeap) {
        if (num <= threshold) {
            newHeap.push_back(num);
        }
    }
    maxHeap = newHeap;
}

int main() {
    int n;
    cin >> n;
    vector<int> maxHeap(n);

    for (int i = 0; i < n; i++) {
        cin >> maxHeap[i];
    }

    buildMaxHeap(maxHeap);

    int threshold;
    cin >> threshold;

    removeElementsGreaterThanThreshold(maxHeap, threshold);

    for (int i = 0; i < maxHeap.size(); i++) {
        cout << maxHeap[i] << " ";
    }
    cout << endl;

    return 0;
}
