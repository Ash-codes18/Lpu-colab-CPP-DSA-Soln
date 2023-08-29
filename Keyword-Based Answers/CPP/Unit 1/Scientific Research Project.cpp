#include <iostream>
#include <iomanip>
using namespace std;
void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
    if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
}
    }
    if (!swapped) {
        break;
    }
        cout << "After iteration " << i + 1 << ": ";
    for (int k = 0; k < n; k++) {
        cout << fixed << setprecision(2) << arr[k] << " ";
    }
        cout << endl;
        }
}

int main() {
int n;
cin >> n;
float arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
}
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
    cout << fixed << setprecision(2) << arr[i] << " ";
}
    cout << endl;
return 0;
}
//Sushant
