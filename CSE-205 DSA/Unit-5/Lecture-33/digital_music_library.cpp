#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void heapifyDown(int *heap, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] < heap[smallest])
        smallest = left;

    if (right < n && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        heapifyDown(heap, n, smallest);
    }
}

void deleteShortestSong(int *heap, int &n) {
    swap(heap[0], heap[n - 1]);
    n--;

    heapifyDown(heap, n, 0);
}

int main() {
    int *heap;
    int n;
    cin >> n;
    heap = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapifyDown(heap, n, i);
    }

    deleteShortestSong(heap, n);

    for (int i = 0; i < n; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
    delete[] heap;
    return 0;
}