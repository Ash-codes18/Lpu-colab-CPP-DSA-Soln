#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void maxHeapify(vector<string> &arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void heapSort(vector<string> &arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> names(n);

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    heapSort(names);

    for (const string &name : names) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
