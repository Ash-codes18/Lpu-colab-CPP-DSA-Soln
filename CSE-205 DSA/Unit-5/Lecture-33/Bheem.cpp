#include <iostream>
#include <vector>

using namespace std;

void minHeapify(vector<int>& minHeap, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && minHeap[left] < minHeap[smallest])
        smallest = left;

    if (right < n && minHeap[right] < minHeap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(minHeap[i], minHeap[smallest]);
        minHeapify(minHeap, n, smallest);
    }
}

void buildMinHeap(vector<int>& minHeap) {
    int n = minHeap.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(minHeap, n, i);
    }
}

void deleteElement(vector<int>& minHeap, int key) {
    int n = minHeap.size();
    int i;
    for (i = 0; i < n; i++) {
        if (minHeap[i] == key)
            break;
    }

    swap(minHeap[i], minHeap[n - 1]);
    minHeap.pop_back();
    minHeapify(minHeap, n - 1, i);
}

int main() {
    int n;
    cin >> n;
    vector<int> minHeap(n);

    for (int i = 0; i < n; i++) {
        cin >> minHeap[i];
    }

    buildMinHeap(minHeap);

    int key;
    cin >> key;

    deleteElement(minHeap, key);

    for (int i = 0; i < minHeap.size(); i++) {
        cout << minHeap[i];
        if (i < minHeap.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
