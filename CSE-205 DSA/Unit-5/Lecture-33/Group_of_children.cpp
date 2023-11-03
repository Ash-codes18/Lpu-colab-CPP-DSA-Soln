#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
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

int serveIceCream(int arr[], int& n) {
    if (n <= 0)
        return -1;

    int mostExcited = arr[0];

    arr[0] = arr[n - 1];
    n--;

    maxHeapify(arr, n, 0);
    return mostExcited;
}

int main() {
    int* children = nullptr;
    int n;

    cin >> n;
    children = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> children[i];
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(children, n, i);
    }
    int mostExcited = serveIceCream(children, n);

    if (mostExcited != -1) {
        cout << mostExcited << endl;
    }

    while (n > 0) {
        int mostExcited = serveIceCream(children, n);
        if (mostExcited != -1) {
            cout << mostExcited << " ";
        }
    }

    delete[] children;
    return 0;
}