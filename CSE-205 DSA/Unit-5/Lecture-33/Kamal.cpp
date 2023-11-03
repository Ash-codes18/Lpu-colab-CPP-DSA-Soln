#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void deleteInRange(int arr[], int& n, int start, int end) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] >= start)
            break;
    }

    int j = i;
    for (; i < n; i++) {
        if (arr[i] > end)
            break;
    }

    int deleteCount = i - j;

    if (deleteCount > 0) {
        for (int k = j + deleteCount; k < n; k++) {
            arr[k - deleteCount] = arr[k];
        }
        n -= deleteCount;
    }

    buildMinHeap(arr, n);
}

void displayHeap(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start, end;
    cin >> start >> end;

    buildMinHeap(arr, n);

    deleteInRange(arr, n, start, end);
    
    displayHeap(arr, n);

    return 0;
}
