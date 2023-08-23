#include <iostream>
using namespace std;
    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
        while (j >= 0 && arr[j] < key) {
        arr[j + 1] = arr[j];j--;
    }
        arr[j + 1] = key;
        cout << "After Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
}
        cout << endl;
        }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
        for (int i = 0; i < n; i++) {
    cin >> arr[i];
}
    cout << "Initial order: ";
        for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
    cout << endl;
    insertionSort(arr, n);
    cout << "Sorted order: ";
        for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
    cout << endl;
        return 0;}
