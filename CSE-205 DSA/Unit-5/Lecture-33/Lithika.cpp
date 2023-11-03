#include <iostream>
using namespace std;

#define MAX_SIZE  100; 

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

int extractMax(int arr[], int& n) {

    int maxElement = arr[0];
    arr[0] = arr[n - 1];
    n--;
    heapify(arr, n, 0);

    return maxElement;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;


    int arr[MAX_SIZE];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    buildMaxHeap(arr, n);

    int maxElement = extractMax(arr, n);
    if (maxElement != -1) {
        cout << maxElement << endl;
    }

    printArray(arr, n);

    return 0;
}
