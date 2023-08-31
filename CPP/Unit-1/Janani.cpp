// You are using GCC
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
    while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];j--;}   
            arr[j + 1] = key;}
}

int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
        cin >> arr[i];}
        insertionSort(arr, n);
        for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
                                    }
        cout << endl;
        return 0;}

//Sushant
