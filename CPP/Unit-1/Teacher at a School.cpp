#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right) {
    int inv_count = 0;
    int i = left;
    int j = mid;
    int k = left;
    
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += mid - i;
        }
    }
    
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    
    while (j <= right)
        temp[k++] = arr[j++];
    
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    
    return inv_count;
}

int mergeSort(int arr[], int temp[], int left, int right) {
    int inv_count = 0;
    if (right > left) {
        int mid = (left + right) / 2;
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
        
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int inversionCount(int arr[], int n) {
    int temp[n];
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int inv_count = inversionCount(arr, n);
    cout << inv_count << endl;
    
    return 0;
}
