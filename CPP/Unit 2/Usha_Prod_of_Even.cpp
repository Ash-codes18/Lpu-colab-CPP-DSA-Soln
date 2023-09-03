#include <iostream>
using namespace std;

int calculateEvenProduct(int* arr, int size) {
    int prod = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            prod *= arr[i];
        }
    }
    return prod;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int res = calculateEvenProduct(arr, n);
    if (res == 1) {
        cout << "Invalid input";
    } else {
        cout << "Product of even elements: " << res;
    }
    return 0;
}
