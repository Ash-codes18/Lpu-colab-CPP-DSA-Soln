#include <iostream>
#include <vector>
#include <algorithm>

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

void removeMaxScore(vector<int>& maxHeap) {
    if (!maxHeap.empty()) {
        swap(maxHeap[0], maxHeap.back());
        maxHeap.pop_back();
        maxHeapify(maxHeap, maxHeap.size(), 0);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> maxHeap;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        maxHeap.push_back(score);
    }

    buildMaxHeap(maxHeap);

    // Remove the maximum score
    removeMaxScore(maxHeap);

    for (int i = 0; i < maxHeap.size(); i++) {
        cout << maxHeap[i];
        if (i < maxHeap.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
